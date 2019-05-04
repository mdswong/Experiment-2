#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	double num1, num2, num3;
	
	cout << "Enter first number: "; cin >> num1;
	
	cout << "Enter second number: "; cin >> num2;
	
	cout << "Enter third number: "; cin >> num3;
	
	if (num1>=num2 && num1>=num3)
	    cout << "The largest of the three numbers is " << num1 << ".";
	else if (num2>=num1 && num2>=num3)
		cout << "The largest of the three numbers is " << num2 << ".";
	else
		cout << "The largest of the three numbers is " << num3 << ".";
		
	_getch();
	return 0;		
}
