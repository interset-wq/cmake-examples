#include <stdio.h>
#include <string.h>

#define MyMacro(MacroArgument) printf("%s\n\t\tFrom Macro", MacroArgument)

void MyFunc(char *);

int main(void)
{
    char str[50] = "From TopLevel";
    MyFunc(str);
    return 0;
}

void MyFunc(char *FuncArgument)
{
    strcat(FuncArgument, "\n\tFrom Function");
    MyMacro(FuncArgument);
}