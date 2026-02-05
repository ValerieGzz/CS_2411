// Valerie Gonzalez 
// Jan 15, 2026 
// Interest Earned 

#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std; 

int main()
{
	double principal, rate, amount, interest; 
	int compounding; 

	cout << "Enter the Principal, Rate, and The Compounding Criteria: "; 
	cin >> principal >> rate >> compounding; 

	amount = principal * pow(1 + (rate * 0.01 / compounding), compounding); 
	interest = amount - principal; 

	cout << fixed << showpoint << setprecision(2); 
	cout << "\nInterest Rate:    " << setw(8) << rate << "%" << endl; 
	cout << "Times Compounded:  " << setw(8) << compounding << endl; 
	cout << "Principal:        $" << setw(8) << principal << endl; 
	cout << "Interest:         $" << setw(8) << interest << endl; 
	cout << "Amount in Savings:$" << setw(8) << amount << endl; 

	return 0; 

}