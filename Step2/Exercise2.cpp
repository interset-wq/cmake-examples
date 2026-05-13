#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

template <typename... Args> // 类似于装饰器
void FilterFoo(vector<string> &OutVar, Args... ARGN); // 变长参数ARGN


int main()
{
    bool Failed = false;
    return 0;
}


/**
 * Solution
 */

template <typename... Args> // 变长参数类型Args
void FilterFoo(vector<string> &OutVar, Args... args) // 将含有字符串"Foo"的参数追加到OutVar数组
{
    vector<string> ARGN = {args...};
    for (const string &item : ARGN)
    {
        // npos表示查找失败
        if (item.find("Foo") != string::npos)
            OutVar.push_back(item);
    }
}

/**
 * Test
 */

void check_contains(const string &var, const vector<string> &OutList, bool &Failed)
{
    auto it = find(OutList.begin(), OutList.end(), var);
    // end()表示最后一个元素的下一位，指针指向此处表示查找失败
    if (it == OutList.end())
    {
        cout << "OutList does not contain: " << var << '\n';
        Failed = true;
    }
}

// void check_nonfoo()