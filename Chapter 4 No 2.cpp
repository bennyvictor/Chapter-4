//Chapter 4 No2
//Roman Numeral Converter
//
//
//

#include <iostream>

using namespace std;

int main ()
{
	int number;
	cout << "Input number from 1-10 :";
	cin >> number;
	switch (number)
	{
		case 1:
	cout << "I";
	break;
	case 2:
	cout << "II";
	break;
	case 3:
	cout << "III";
	break;
	case 4:
	cout << "IV";
	break;
	case 5:
	cout << "V";
	break;
	case 6:
	cout << "VI";
	break;
	case 7:
	cout << "VII";
	break;
	case 8:
	cout << "VIII";
	break;
	case 9:
	cout << "IX";
	break;
	case 10:
	cout << "X";
	break;
	default:
	cout << "Invalid Input";
	}
	
	return 0;
}
