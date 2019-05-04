#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int m, number, sum;
	bool end=false;
	
	while (!end)
	{
		cout << "Enter a number: "; cin >> number;
		
		if (number<=0)
		   	{
		  		cout << "Thank you!"; 
  				break;
		  		end=true;
			}
		else
			{
				sum=0;
		    	for (m=1; m<=number; m++)
		    	{
		    		sum+=m;	
				}
				cout << "The sum of all whole numbers from 1 to " << number << " is " << sum << "." << endl;	
			}
	}
	
	_getch();
	return 0;
	
}
