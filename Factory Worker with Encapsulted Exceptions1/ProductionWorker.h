#pragma once
#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include <string>

using namespace std;

#include "Employee.h"

class ProductionWorker : public Employee
{
private:
	int shift;
	double hourly_pay;

public:
	//Constructor
	ProductionWorker(string e_name = " ", int e_num = 0, string H_date = " ", int s = 1, double h_pay = 0.0);


	//Setters
	void setShift(int s);

	void setPayRate(double h_pay);

	//Getters
	int getShift() const
	{
		return shift;
	}

	double getHourlyPay() const
	{
		return hourly_pay;
	}

	//Print Information
	void printProdWorkInfo() const;


};

#endif