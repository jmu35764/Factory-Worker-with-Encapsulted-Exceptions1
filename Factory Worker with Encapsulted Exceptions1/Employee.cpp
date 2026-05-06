// Factory Worker Heirarchy Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Employee.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

Employee::Employee(string e_name, int e_num, string H_date)
{
	Emp_Name = e_name;
	Emp_Num = e_num;
	Hire_date = H_date;
}

void Employee::setName(string e_name)
{
	Emp_Name = e_name;
}

void Employee::setEmpNum(int e_num)
{
	Emp_Num = e_num;
}

void Employee::setHireDate(string H_date)
{
	Hire_date = H_date;
}

void Employee::printEmpInfo() const
{
	cout << "printEmpInfo is called" << endl << endl;

	cout << left << setw(18) << "Name: " << Emp_Name << endl;
	cout << left << setw(18) << "Employee Number: " << Emp_Num << endl;
	cout << left << setw(18) << "Hire Date: " << Hire_date << endl;
}