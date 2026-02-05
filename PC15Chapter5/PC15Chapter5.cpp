// Valerie Gonzalez 
// Feb 3rd 
// Payroll Report 
#include <iostreap> 
#include <iomanip>
using namespace std; 

int main()
{
	int empNumber; 
	double stateTax, federalTax, ficaTax, grossPay; 
	double totalStateTax = 0.00; 
	double totalFederalTax = 0.00; 
	double totalFicaTax = 0.00; 
	double totalGrossPay = 0.00; 
	double totalNetPay = 0.00; 

	cout << "Enter employee number. 0 to terminate: "; 
	cin >> empNumber; 

	// Input Validation 
	while (empNumber < 0)
	{
		cout << "Employee number must be positive. Check and reenter: "; 
		cin << empNumber; 
	}
	while (empNumber != 0)
	{
		// GROSS PAY 
		cout << "Enter gross pay: "; 
		cin >> grossPay; 
		while (grossPay < 0.00)
		{
			cout << "Gross pay must be positive. Check and reenter: "; 
			cin << grossPay; 
		}
		// FED TAX
		cout << "Enter Federal tax: ";
		cin >> federalTax;
		while (federalTax < 0.00)
		{
			cout << "Federal tax must be positive. Check and reenter: ";
			cin << federalTax;
		}
		// STATE TAX 
		cout << "Enter State tax: ";
		cin >> stateTax;
		while (stateTax < 0.00)
		{
			cout << "State tax must be positive. Check and reenter: ";
			cin << stateTax;
		}
		// FICA TAX 
		cout << "Enter Fica tax: ";
		cin >> ficaTax;
		while (ficaTax < 0.00)
		{
			cout << "Fica tax must be positive. Check and reenter: ";
			cin << ficaTax;
		}
	}


}