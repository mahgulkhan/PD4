#include <iostream>
using namespace std;

void time(int h, int m );
main()
{
int h,m;
cout << "Enter number of hours: ";
cin >> h;
cout << "Enter number of minutes: " ;
cin >> m;
time(h,m);
}
void time(int h, int m)
{
int time;
time = h*60;
if (time>m)
{cout << h ;}
if (time<m)
{cout << m;}
}