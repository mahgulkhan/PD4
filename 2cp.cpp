#include <iostream>
using namespace std;

void torf(string);
main()
{
string condition;
cout << "Enter true or false: ";
cin >> condition;
torf(condition);
}
void torf(string condition)
{
if (condition == "True")
{cout << "False";}
if (condition == "False")
{cout << "True";}
}