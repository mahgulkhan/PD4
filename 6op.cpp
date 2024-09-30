#include <iostream>
#include <windows.h>
using namespace std;
void h();
void a();
void s();
void n();
void gotoxy(int x, int y);
main()
{
int x;
int y;
system ("cls");

	h();
    cout<<("\n");
	gotoxy(0,0);
	a();
    cout<<("\n");
	gotoxy(0,6);
	s();
    cout<<("\n");
	gotoxy(0,12);
	s();
    cout<<("\n");
	gotoxy(0,18);
	a();
    cout<<("\n");
	gotoxy(0,24);
	n();
    cout<<("\n");


}
void h()
{
cout << " 8   8 " << endl; 
cout << " 8   8 " << endl; 
cout << " 88888 " << endl; 
cout << " 8   8 " << endl; 
cout << " 8   8 " << endl; 
}
void a()
{
cout << "   8 " << endl; 
cout << "  8 8" << endl;
cout << " 88888" << endl;  
cout << " 8   8" << endl; 
cout << " 8   8" << endl; 
}
void s()
{
cout << "  8888 " << endl; 
cout << " 8     " << endl;
cout << "  888 " << endl;  
cout << "     8 " << endl; 
cout << " 8888 " << endl; 
}
void n()
{
cout << " 8   8 " << endl;
cout << " 88  8  " << endl;
cout << " 8 8 8  " << endl;
cout << " 8  88    " << endl;
cout << " 8   8 " << endl;
}
void gotoxy (int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


