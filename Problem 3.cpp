#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main()

{
	int x, y;
	const double z=2.5;
	
	cout << "Enter value for x: "; cin >> x;
	cout << "Enter value for y: "; cin >> y;
	
	switch (x)
	
	{
		case 1:
			if (y>1 && y<5)
			   cout << "V = " << setw(10) << setprecision(2) << fixed << x*y*z;
			else if (y>=5) 
				cout << "V = " << setw(10) << setprecision(2) << fixed << x+y/z; 
			else
				cout <<	"V = " << setw(10) << setprecision(2) << fixed << x+y+z;
 			break;
			 
		case 2:
			if (y<=5)
			   cout << "V = " << setw(10) << setprecision(2) << fixed << abs((x-y)/z);
			else if (y>5)
				cout << "V = " << setw(10) << setprecision(2) << fixed << x - sqrt(y+z); 
			break;
		
		default:
	 		cout << "V = " << setw(10) << setprecision(2) << fixed << x+y+z;
			break;		
 	}
			 
	_getch();
	return 0;
	
}
