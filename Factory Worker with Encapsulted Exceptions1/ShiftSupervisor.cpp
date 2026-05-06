#include "ShiftSupervisor.h"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

ShiftSupervisor::ShiftSupervisor(string e_name, int e_num, string H_date, double a_sal, double a_bon)
	:Employee(e_name, e_num, H_date), AnnSalary(a_sal), AnnBonus(a_bon)
{
}

void ShiftSupervisor::setAnnSalary(double a_sal)
{
	AnnSalary = a_sal;
}

void ShiftSupervisor::setAnnBonus(double a_bon)
{
	AnnBonus = a_bon;
}

void ShiftSupervisor::printShiftSupInfo() const
{
	printEmpInfo();

	cout << left << setw(18) << "Annual Salary: " << AnnSalary << endl;
	cout << left << setw(18) << "Annual Bonus: " << AnnBonus << endl;
}