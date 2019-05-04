#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int a, b, rows, columns;
	
	cout << "Enter number of rows: "; cin >> rows;
	cout << "Enter number of columns: "; cin >> columns;
	
	for (a=1; a<=rows; a++)
	{
		for (b=1; b<=columns; b++)
		{
			cout << "*";
		}
		    cout << endl;
	}
	
	_getch();
	return 0;
	
}
