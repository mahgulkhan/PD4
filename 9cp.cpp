#include <iostream>
using namespace std;

void state(int ppl, int tp);
main()
{
int ppl;
int tp;
cout << "Number of people in the household: ";
cin >> ppl;
cout << "Number of rolls of TP: ";
cin >> tp;
state(ppl,tp);
}
void state(int ppl, int tp)
{
int state;
state =(500*tp)/(ppl*57);
if (state <=10)
{cout << "Your tp will only last " << state <<" days , you need to buy more!";}
if (state>=10)
{cout << "Your tp will last " << state << " days , no need to panic";}
}
