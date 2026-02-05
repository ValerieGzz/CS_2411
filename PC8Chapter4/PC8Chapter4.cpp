// Valerie Gonzalez 
// Jan 22, 2026 
// Color Mixer 
#include <iostream>
#include <string>
using namespace std; 

int main()
{
	const string RED = "red"; 
	const string BLUE = "blue"; 
	const string YELLOW = "yellow"; 

 string color1, color2; 

 cout << "Enter the 1st primary color: "; 
	cin >> color1 ; 

	cout << "Enter the 2nd primary color: "; 
	cin >> color2 ;

	if (color1 != RED && color1 != BLUE && color1 != YELLOW)
	{
		cout << "The first primary color is invaild.\n"; 
	}
	else if (color2 != RED && color2 != BLUE && color2 != YELLOW)
	{
		cout << "The second primary color is invaild.\n";
	}
	else if (color1 == color2)
	{
		cout << "Both the colors cannot be the same. \n"; 
	}

	else
	{
		if (color1 == RED)
		{
			if (color2 == BLUE)
			{
				cout << "Purple\n"; 
			}
			else
			{
				cout << "Orange\n"; 
			}
		}
		else if (color1 == BLUE)
		{
			if (color2 == RED)
			{
				cout << "Purple\n"; 
			}
			else 
			{
				cout << "Green\n"; 
			}
		}
		else 
		{
			if (color2 == RED)
			{
				cout << "Orange\n"; 
			}
			else
			{
				cout << "Green\n"; 
			}
		}
	}
	return 0; 
}
