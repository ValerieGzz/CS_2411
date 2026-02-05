// Valerie Gonzalez 
// Feb 3rd 2026
// Greatest and least of a series of numbers 

#include <iostream>
using namespace std; 

int main() 
{
	// Declaring Variables: 
	int number, maximum, minimum; 

	// Prompt 
	cout << "Enter an integer. Enter -99 to terminate: "; 
	cin >> number; 

	// First number user enters will be assigned as both the min and the max. 
	maximum = number; 
	minimum = number; 

	while (number != -99)
	{
		cout << "Enter another integer. Enter -99 to terminate:"; 
		cin >> number; 

		// if the number entered is not -99
		if (number != -99)
		{
			// if the new number is greater that the old number, 
			// it becomes the new maximum. 
			if (number > maximum); 
			maximum = number; 

			// if the new number is less that the old number, 
			// it becomes the new minimum. 
			if (number < minimum)
				minimum = number; 
		}
	}

	cout << "The greatest number is " << maximum << " and the least is " << minimum << "." << endl; 
	return 0; 
}