// Valerie Gonzalez 
// Jan 27th, 2026 
// Bank Charges 
#include <iostream> 
#include <iomanip>
using namespace std; 

int main() 
{	// Declaring Constants + Variables 
	const double MONTHLY_SERVICE_FEE = 10.00; 
	const double MINIMUM_BALANCE = 400.00; 
	const double LOW_BALANCE_FEE = 15.00; 
	const double LESS_THAN_TWENTY_CHECKS = 0.10; 
	const double BETWEEN_TWENTY_TO_THIRTY_NINE_CHECKS = 0.08; 
	const double BETWEEN_FORTY_TO_FIFTY_NINE_CHECKS = 0.06; 
	const double SIXTY_CHECKS_OR_MORE = 0.04; 

	int numberOfChecks; 
	double accountBalance, checkFees, totalFees; 

	cout << "Enter account balance: "; 
	cin >> accountBalance; 

	cout << "Enter the number of checks written: "; 
	cin >> numberOfChecks; 

	// Start of Input Validation 
	if (accountBalance < 0.00)
		cout << "Acount is overdrawn.\n"; 
	if (numberOfChecks < 0.00)
		cout << "Number of checks must be a positive quantity. "; 
	// End of Input Validation 

	// Start of Calculations 
	else 
	{
		if (numberOfChecks < 20)
			checkFees = numberOfChecks * LESS_THAN_TWENTY_CHECKS;
		else if (numberOfChecks <= 39)
			checkFees = numberOfChecks * BETWEEN_TWENTY_TO_THIRTY_NINE_CHECKS;
		else if (numberOfChecks <= 59)
			checkFees = numberOfChecks * BETWEEN_FORTY_TO_FIFTY_NINE_CHECKS;
		else 
			checkFees = numberOfChecks * SIXTY_CHECKS_OR_MORE ; 

		totalFees = MONTHLY_SERVICE_FEE + checkFees; 

		if (accountBalance < MINIMUM_BALANCE)
			totalFees += LOW_BALANCE_FEE; 
		// End of Calculations
	
		// Display Output 
		cout << fixed << showpoint << setprecision(2); 
		cout << "The bank fee is $" << totalFees << "\n"; 
	}
	return 0; 

}