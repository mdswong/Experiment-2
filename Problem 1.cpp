#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	char package;
	double hours;
	
	cout << "Enter the package you have purchased: "; cin >> package;
	cout << "Enter the number of hours you have consumed: "; cin >> hours;
	
	switch (package)

	{
	
	case 'A':
	case 'a':
	
		if (hours > 10)
			cout << "Total Amount Due: Php " << 995 + ((hours - 10) * 20) << ".00";
		else
		    cout << "Total Amount Due: Php 995.00";
		
		break;
	
	case 'B':
	case 'b':
		
		if (hours > 20)
			cout << "Total Amount Due: Php " << 1495 + ((hours - 20) * 10) << ".00";
		else
		    cout << "Total Amount Due: Php 1495.00";
		
		break;
	
	case 'C':
	case 'c':
		
		cout << "Total Amount Due: Php 1995.00";
		
		break;
		
	default:
		cout << "Invalid Input";
		
	}

	_getch();
	return 0;
}
