#include <iostream>
#include <windows.h>
using namespace std;

void maze();
void gotoxy(int x, int y);
void player(int x, int y);
main()
{
int x=4, y=4;
system("cls");
maze();
while (true)
{
player(x,y);
y=y+1;
if (y==13)
{
y=5;
}
}
}

void player(int x, int y)
{
gotoxy(x,y);
cout << "P";
Sleep(100);
gotoxy(x,y);
cout << " ";
}


void maze()
{
cout << " ####################################################" << endl;
cout << " #                                                  # " << endl;
cout << " #                                                  # " << endl;
cout << " #                                                  #" << endl;
cout << " #                                                  #" << endl;
cout << " #                                                  #" << endl;
cout << " #                                                  #" << endl;
cout << " #                                                  #" << endl;
cout << " #                                                  #" << endl;
cout << " #                                                  #" << endl;
cout << " #                                                  #" << endl;
cout << " #                                                  #" << endl;
cout << " #                                                  #" << endl;
cout << " #                                                  #" << endl;
cout << " ####################################################" << endl;

}

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
}