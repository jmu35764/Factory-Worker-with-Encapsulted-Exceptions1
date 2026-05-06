#include "ProductionWorker.h"

#include <iostream>
#include <iomanip>

using namespace std;

ProductionWorker::ProductionWorker(string e_name, int e_num, string H_date, int s, double h_pay)
	: Employee(e_name, e_num, H_date), shift(s), hourly_pay(h_pay) 
{
	/*if (s == 1 || s == 2)
	{
		shift = s;
	}

	else
		throw InvalidShift(s);

	if (h_pay > 0)
	{
		hourly_pay = h_pay;
	}

	else
		throw InvalidPayrate(h_pay);*/
}

void ProductionWorker::setShift(int s)
{
	if (s == 1 || s == 2)
	{
		shift = s;
	}

	else
		throw InvalidShift(s);
}

void ProductionWorker::setPayRate(double h_pay)
{
	if (h_pay > 0)
	{
		hourly_pay = h_pay;
	}

	else
		throw InvalidPayrate(h_pay);
}

void ProductionWorker::printProdWorkInfo() const
{
	printEmpInfo();

	cout << "printProdWorkInfo is called" << endl << endl;

	cout << left << setw(18) << "Shift: ";

		if (shift == 1)
		{
			cout << "Day " << endl;
		}

		else
		{
			cout << "Night" << endl;
		}

		cout << left << setw(18) << "Hourly Pay Rate: $" << hourly_pay << endl;
}