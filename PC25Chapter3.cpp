/* V. Gonzalez 
 Jan 20, 2026
 Word Game 
*/
#include <iostream>
#include <string>
using namespace std; 

int main() {
	string name, city, age, college, profession, animal, petName; 

	cout << "Name: "; 
	getline(cin, name); 

	cout << "City: "; 
	getline(cin, city); 

	cout << "Age: "; 
	getline(cin, age); 

	cout << "College: "; 
	getline(cin, college); 

	cout << "Profession: "; 
	getline(cin, profession); 

	cout << "Animal: "; 
	getline(cin, animal); 

	cout << "Pet Name: ";
	getline(cin, petName); 

	cout << "There once was a person named " << name << " who lived in " << city << "." << "At the age of "; 
	cout << age << ", " << name << " went to college at " << college << ". " << name; 
	cout << " graduated and went to work as a " << profession << "." << "Then, " << name << " adopted a(n)"; 
	cout << animal << " named " << petName << "." << "They both lived happily ever after!" << endl; 

		return 0; 
}