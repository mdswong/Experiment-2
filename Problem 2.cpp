#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	double gallons, balance;
	
	cout << "Enter your water consumption (in gallons): "; cin >> gallons;
	
	cout << "Enter your unpaid balance: Php "; cin >> balance;
	
	if (balance>0)
	   cout << "Total Amount Due: Php "	<< (gallons*1.10) + (balance+20);
	else if (balance<0)
		 cout << "Invalid Input";
	else
		cout << "Total Amount Due: Php " << gallons*1.10;	    

	_getch();
	return 0;
}
