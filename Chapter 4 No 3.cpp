//Chapter 4 No 3
//Magic Dates
//
//
//

#include <iostream>

using namespace std;

int main ()
{
	int month, date, year, mxd;
	
	cout << "Enter a month :";
	cin >> month;
	
	cout << "Enter a date :";
	cin >> date;
	
	cout << "Enter a Year in 2 digit format :";
	cin >> year;
	
	mxd = month * date;
	
	if (mxd==year)
	{
		cout << "The date is magic";
	}
	else
	{
		cout << "The date is not magic";
	}
	
	return 0;
}
