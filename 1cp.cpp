#include <iostream>
using namespace std;

void torf(int , int);
main()
{
int num1, num2;
cout << "Enter number 1: ";
cin >> num1;
cout << "Enter number 2: ";
cin >> num2;
torf(num1,num2);
}
void torf(int num1, int num2)
{
string torf;
if (num1==num2)
{cout << "TRUE";}
if (num1!=num2)
{cout << "FALSE";}
}

