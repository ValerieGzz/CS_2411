// Valerie Gonzalez 
// Jan 29th 
// Speed of sound through air, water, and steel

#include <iostream>
#include <iomanip> 
using namespace std; 

int main()
{
	// Declaring constants 
	const double SPEED_THROUGH_AIR = 1100; 
	const double SPEED_THROUGH_WATER = 4900; 
	const double SPEED_THROUGH_STEEL = 16400; 

	const int AIR_CHOICE = 1; 
	const int WATER_CHOICE = 2; 
	const int STEEL_CHOICE = 3; 

	// Declaring variables 
	int choice; 
	double distance, speed, time; 

	// Display a menu
	cout << "Select a medium: \n"; 
	cout << "1.Air \n" << "2.Water\n" << "3.Steel \n" << "Enter your choice:";
	cin >> choice; 

	cout << fixed << showpoint << setprecision(4); 
	switch (choice)
	{
	case AIR_CHOICE: 
		speed = SPEED_THROUGH_AIR; 
		cout << "Enter the distance: "; 
		cin >> distance; 

		if (distance > 0.00) // Input validation for AIR 
		{
			time = distance / speed;
			cout << endl << "The sound wave takes " << time << " seconds to travel " << distance << " feet through air.\n";
		}
		else
			cout << endl << "Distance must be positive." << endl; 
		break;

	case WATER_CHOICE:
		speed = SPEED_THROUGH_WATER;
		cout << "Enter the distance: ";
		cin >> distance;

		if (distance > 0.00) // Input validation for WATER 
		{
			time = distance / speed;
			cout << endl << "The sound wave takes " << time << " seconds to travel " << distance << " feet through water.\n";
		}
		else
			cout << endl << "Distance must be positive." << endl;
		break;

	case STEEL_CHOICE:
		speed = SPEED_THROUGH_STEEL;
		cout << "Enter the distance: ";
		cin >> distance;

		if (distance > 0.00) // Input validation for STEEL
		{
			time = distance / speed;
			cout << endl << "The sound wave takes " << time << " seconds to travel " << distance << " feet through steel.\n";
		}
		else
			cout << endl << "Distance must be positive." << endl;
		break;

	default: 
		cout << endl << "Invald choice. Check and reenter. \n"; // Input validation if any number other than 1,2,3 is selected 
	}
	return 0; 
}