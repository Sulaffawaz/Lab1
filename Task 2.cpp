#include <iostream>
using namespace std;

int main() {
	double baseSalary, totalSales, commissionRate, pay;

	cout << "Enter base salary: ";
	cin >> baseSalary;

	cout << "Enter total sales: ";
	cin >> totalSales;

	cout << "Enter commission rate: ";
	cin >> commissionRate;

	pay = baseSalary + (totalSales * commissionRate);

	cout << "The salesperson pay is: " << pay << endl;

	return 0;
}
