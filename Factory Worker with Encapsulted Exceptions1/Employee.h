#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
using namespace std;

class Employee
{
private:
	string Emp_Name;
	int Emp_Num;
	string Hire_date;

public:
	//Constructor
	Employee(string e_name = " ", int e_num = 0, string H_date = " ");

	// Exception Class
	class InvalidEmployeeNumber
	{
	private:
		int number;

	public:
		InvalidEmployeeNumber(int num)
		{
			number = num;
		}

		int getNumber() const
		{
			return number;
		}
	};

	//Setters
	void setName(const string e_name);

	void setEmpNum(int e_num);

	void setHireDate(const string H_date);

	//Getters
	string getName() const
	{
		return Emp_Name;
	}

	int getEmpNum() const
	{
		return Emp_Num;
	}

	string getHireDate() const
	{
		return Hire_date;
	}

	// Print function
	void printEmpInfo() const;

};


#endif
