#include <iostream>
using namespace std;

void pet(int holidays);
main()
{
int holidays;
cout << "Holidays: " ;
cin >> holidays;
pet(holidays);
}
void pet(int holidays)
{
int w, gt, dif, dif1,dif2;
w = 365-holidays;
gt = w*63-holidays*127;
dif= 30,000-gt;
dif1=dif/60;
dif2=dif/3600;
dif2=30,000-dif2;
if (gt<30,000)
{
cout << "Tom plays well." << endl;
cout << dif1 << " hours " << " and " << dif2 << " minutes more to sleep";}
}
if (gt>30,000)
{
cout << "Tom will runaway." << endl;
cout << dif1 << hours " and " << dif2 << " minutes more to play";}
}
