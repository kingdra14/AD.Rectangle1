// Abdoulie Drammeh	
// Rectangle
#include <iostream>
#include <conio.h>

using namespace std;
int GetWidthFromUser();
int GetlengthFromUser();
int CalculateArea();
void DisplayArea(int n);

int GetlengthFromUser()
{
	int length;

	{
		cout << "Enter Lenghth: ";
		cin >> length;
	}
	return length;
}
int GetWidthFromUser()
{
	int width;
	{
		cout << "Enter Width: ";
		cin >> width;
	}
	return width;
}

int CalculateArea()
{
	int area;
	{
		area = GetWidthFromUser() * GetlengthFromUser();
	}
	return area;
}
void DisplayArea(int n)
{
	cout << "your Area is: " << n << ".\n";
}
int main()
{
	DisplayArea(CalculateArea());

	(void)_getch();
	return 0;
}