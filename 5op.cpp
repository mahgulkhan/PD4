#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void movealpha(int x, int y);

main()
{
int x=10;
int y=10;
system("cls");
movealpha(x,y);
}
void movealpha(int x, int y)
{
gotoxy(x,y);
cout << " **    **     *     *    *    ****  *    * *      " << endl;
gotoxy(x,y+1);
cout << " * *  * *    * *    *    *   *    * *    * *      " << endl;
gotoxy(x,y+2);
cout << " *  **  *   *****   ******   *  *** *    * *      " << endl;
gotoxy(x,y+3);
cout << " *      *  *     *  *    *   *    * *    * *      " << endl;
gotoxy(x,y+4);
cout << " *      * *       * *    *    ****   ****  ****** " << endl;




}

void gotoxy (int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}