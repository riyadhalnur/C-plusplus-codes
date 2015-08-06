#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double Principal; // the principal or starting amount
	double IntRate; // the interest rate
	double PayPerYear; // number of payments per year
	double NumYears; // number of years over which payments are made
	double Payment; // payment 
	double TotalInt; // total amount of interest paid over the life of the loan
	double numer, denom; // numerator and denominator for the payment formula
	double b, e; // base and exponential for pow() expression

	cout << "Loan payment calculator";
	cout << "\n\n";
	cout << "Enter principal amount: ";
	cin >> Principal;

	cout << "Enter interest rate (i.e 0.075): ";
	cin >> IntRate;

	cout << "Enter number of payments per year: ";
	cin >> PayPerYear;

	cout << "Enter number of years: ";
	cin >> NumYears;

	numer = IntRate * (Principal / PayPerYear);

	e = - (PayPerYear * NumYears);
	b = (IntRate / PayPerYear) + 1;

	denom = 1 - pow(b, e);

	Payment = numer / denom;

	cout << "Payment is: " << Payment << "\n";

	TotalInt = Payment * NumYears;
	cout << "Total amount of interest paid over " << NumYears << " years is: " << TotalInt;

	return 0;
}