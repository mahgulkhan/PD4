#include <iostream>
using namespace std;

void dis (string name, float price);
main()
{
while(true)
{
string name;
float price ;
cout << "Enter country name: ";
cin >> name;
cout << "Enter ticket price in dollars: $";
cin >> price;
dis (name , price);
}
}
void dis (string name, float price)
{
float dis1,dis2,dis3,dis4,dis5;
if (name=="Pakistan")
{dis1 = price-(price*0.05);
cout << "Final ticket price: $" << dis1 <<endl;}

if (name=="Ireland")
{dis2 = price-(price*0.1);
cout << "Final ticket price: $" << dis2<<endl;}

if (name=="India")
{dis3 = price-(price*0.2);
cout << "Final ticket price: $" << dis3<<endl;}

if (name=="England")
{dis4 = price-(price*0.3); 
cout << "Final ticket price: $" << dis4<<endl;}

if (name=="Canada")
{dis5 = price-(price*0.45);
cout << "Final ticket price: $" << dis5<<endl;}
}




