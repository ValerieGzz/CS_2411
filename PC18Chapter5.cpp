// Valerie Gonzalez 
// Feb 5th 
// Population Bar Chart 
#include <iostream>
#include <fstream>
using namespace std; 

int main()
{
	// declaring variables 
	int population, year; 
	ifstream inputfile; 
	ofstream outputfile; 

	inputfile.open("population.txt"); 
	outputfile.open("Histogram.txt"); 

	outputfile << "PRAIRIEVILLE POPULATION GROWTH\n"; 
	outputfile << "each * represents 1,000 people\n\n\n";

	for (year = 1900; year <= 2000; year += 20)
	{
		inputfile >> population; 
		outputfile << year << "   ";

		for (int star = 1; star <= (population / 1000); star++)
		{
			outputfile << "*";
		}
		outputfile << "\n";
	}
	inputfile.close(); 
	outputfile.close(); 
	return 0; 
}