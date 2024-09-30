#include <iostream>
using namespace std;

void flowershop(int rr, int wr, int t);
main()
{
int rr,wr,t;
cout << "Red rose: ";
cin >> rr;
cout << "White rose: ";
cin >> wr;
cout << "Tulips: ";
cin >> t;
flowershop(rr,wr,t);
}
void flowershop(int rr, int wr , int t)
{
float r1,r2,r3,total;
r1=rr*2.00;
r2=wr*4.10;
r3=t*2.50;
total =r1+r2+r3;
cout << "Original Price: "<< total << endl;
if (total >=201)
{cout << "Price after discount: " << total-(total*0.2);}
if (total <=200)
{cout << "No discount applied.";}
}