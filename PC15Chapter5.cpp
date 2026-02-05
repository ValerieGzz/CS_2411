// Valerie Gonzalez 
// Feb 3rd 
// Payroll Report 
#include <iostream> 
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
		cin >> empNumber;
	}
	while (empNumber != 0)
	{
		// GROSS PAY 
		cout << "Enter gross pay: "; 
		cin >> grossPay; 
		while (grossPay < 0.00)
		{
			cout << "Gross pay must be positive. Check and reenter: "; 
			cin >> grossPay; 
		}
		// FED TAX
		cout << "Enter Federal tax: ";
		cin >> federalTax;
		while (federalTax < 0.00)
		{
			cout << "Federal tax must be positive. Check and reenter: ";
			cin >> federalTax;
		}
		// STATE TAX 
		cout << "Enter State tax: ";
		cin >> stateTax;
		while (stateTax < 0.00)
		{
			cout << "State tax must be positive. Check and reenter: ";
			cin >> stateTax;
		}
		// FICA TAX 
		cout << "Enter Fica tax: ";
		cin >> ficaTax;
		while (ficaTax < 0.00)
		{
			cout << "Fica tax must be positive. Check and reenter: ";
			cin >> ficaTax;
		}
		// The taxes can not be more than the gross pay 
		if ((federalTax + stateTax + ficaTax) > grossPay)
		{
			cout << "Taxes cannot be more than the gross pay. Check and reenter . \n"; 
		}
		else
		{
			// Updating accomilators 
			totalGrossPay += grossPay; 
			totalFederalTax += federalTax; 
			totalStateTax += stateTax; 
			totalFicaTax += ficaTax; 
		}

		cout << "Enter the next employee: "; 
		cin >> empNumber; 
		
		while (empNumber < 0)
		{
			cout << "Imposible employee number must be positive. Check and reenter: "; 
			cin >> empNumber; 
		}
	}

	totalNetPay = totalGrossPay - (totalFederalTax + totalStateTax + totalFicaTax); 

	cout << fixed << setprecision(2) << showpoint; 

	cout << "Total Gross Pay: \t$" << setw(8) << totalGrossPay << endl;
	cout << "Total Federal Tax: \t$" << setw(8) << totalFederalTax << endl;
	cout << "Total State Tax: \t$" << setw(8) << totalStateTax << endl;
	cout << "Total Fica Tax: \t$" << setw(8) << totalFicaTax << endl; 
	cout << "Total Net Pay: \t$" << setw(8) << totalNetPay << endl; 

	return 0; 
}