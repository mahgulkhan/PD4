#include <iostream>
using namespace std;

void torf(int a, int b);
main()
{
int a, b ;
cout << "Enter your position: " ;
cin >> a;
cout << "Enter your friend's position: ";
cin >> b;
torf(a,b);
}
void torf(int a , int b)
{
int dif;
dif = b-a;
if (b-a <=6)
{cout << "true";}
if (b-a >6)
{cout << "false";}
}