#include <iostream>
#include <vector>
#include <string>
using namespace std;

/**
 * Solution
 */
// ListVar is a vector<string>
// Value is a string
#define MacroAppend(ListVar, Value) ListVar.push_back(Value)

void FuncAppend(vector<string> &ListVar, string Value)
{
    MacroAppend(ListVar, Value);
}

/**
 * Test
 */
void print_vector(string s, const vector<string> &v)
{   
    if (s != "")
        cout << s << ": ";
    for (int i = 0; i < v.size(); i++)
    {
        if (!i)
            cout << v[i];
        else
            cout << ';' << v[i];
    }
    cout << '\n';
}

void test()
{
    vector<string> Original = {"Beta", "Gamma"};
    vector<string> Expected = {"Alpha", "Beta", "Gamma", "Delta"};

    // BeginList is deep copy of Original
    vector<string> BeginList = Original; // {"Beta", "Gamma"}
    vector<string> EndList = {"Alpha"};

    // test MacroAppend
    MacroAppend(BeginList, "Delta");
    for (const string value: BeginList)
        MacroAppend(EndList, value);
    
    if (BeginList == Original)
        cout << "MacroAppend unimplemented or did nothing\n";
    else if (EndList != Expected)
    {
        cout << "MacroAppend error, final value: ";
        print_vector("", EndList);
    } 
    else
        cout << "MacroAppend correct\n";

    BeginList = Original; // {"Beta", "Gamma"}
    EndList = {"Alpha"};

    // test FuncAppend
    FuncAppend(BeginList, "Delta");
    for (const string value : BeginList)
        FuncAppend(EndList, value);

    if (BeginList == Original)
        cout << "FuncAppend unimplemented or did nothing\n";
    else if (EndList != Expected)
    {
        cout << "FuncAppend error, final value: ";
        print_vector("", EndList);
    }
    else
        cout << "FuncAppend correct\n";
}

int main()
{
    vector<string> MyList = {"a", "b", "c"};
    print_vector("MyList", MyList);

    FuncAppend(MyList, "d");
    print_vector("MyList", MyList);

    FuncAppend(MyList, "e");
    print_vector("MyList", MyList);

    test();
    return 0;
}