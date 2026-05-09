#include <iostream>
#include <string>
using namespace std;

#define MyMacro(MacroArgument) cout << MacroArgument << "\n\t\tFrom Macro"

void MyFunc(string FuncArgument);

int main()
{
    MyFunc("From TopLevel");
    return 0;
}

void MyFunc(string FuncArgument)
{
    MyMacro(FuncArgument + "\n\tFrom Function");
}
