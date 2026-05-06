#ifndef SHIFTSUPERVISORH
#define SHIFTSUPERVISOR_H

#include <string>

#include "Employee.h"

class ShiftSupervisor : public Employee
{
private:
	double AnnSalary;
	double AnnBonus;

public:
	// Constructor
	ShiftSupervisor(string e_name = " ", int e_num = 0, string H_date = " ", double a_sal = 0.0, double a_bon = 0.0);

	//Setters
	void setAnnSalary(double a_sal);

	void setAnnBonus(double a_bon);

	//Getters
	double getAnnSalary() const
	{
		return AnnSalary;
	}

	double getAnnBonus() const
	{
		return AnnBonus;
	}

	void printShiftSupInfo() const;

};


#endif
