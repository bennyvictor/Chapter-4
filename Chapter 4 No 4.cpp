//Chapter 4 No 4
//Areas of Rectangle
//
//
//

#include <iostream>

using namespace std;

int main ()
{
	int length1, width1, area1, length2, width2, area2;
	
	cout << "Input 1st rectangle length :";
	cin >> length1;
	
	cout << "Input 1st rectangle width :";
	cin >> width1;
	
	cout << "Input 2nd rectangle length :";
	cin >> length2;
	
	cout << "Input 2nd rectangle width :";
	cin >> width2;
	
	area1 = length1 * width1;
	
	area2 = length2 * width2;
		
	if (area1<area2)
	{
		cout << "Area 2 is greater than Area 1";
	}
	else if (area2<area1)
	{
		cout << "Area 1 is greater than Area 2";
	}
	else 
	{
		cout << "Area 1 is equal to Area 2";
	}
	
	return 0;
}
