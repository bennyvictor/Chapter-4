//Chapter 4 No 1
//Maximum / Minimum
//
//
//

#include <iostream>

using namespace std;

int main ()
{
	int number1, number2;
	cout << "Input 1st number :";
	cin >> number1;
	cout << "Input 2nd number :";
	cin >> number2;
	if(number1<number2)
	{
		cout << "This number is larger \n" << number2;
	}
	else if (number2<number1)
	{
		cout << "This number is larger \n" << number1;
	}
	else
	{
		cout << "The numbers are equal";
	}
	return 0;
}
