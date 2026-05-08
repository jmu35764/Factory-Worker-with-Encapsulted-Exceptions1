#include <iostream>
#include <iomanip>
#include <string>


#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"


int main()
{
	bool tryagain = true;
	int e_num;
	int Prod_shift;
	int Prod_pr;
	
	//****** EMPLOYEE EXCEPTION TEST ******//

	/*cout << endl << "///// EMPLOYEE EXCEPTION TEST /////" << endl << endl;

	Employee empTest;
	int e_num;

	cout << "Enter Employee Number: ";
	cin >> e_num;

	while (tryagain)
	{
		try
		{
			empTest.setEmpNum(e_num);

			tryagain = false;
		}

		catch (Employee::InvalidEmployeeNumber)
		{
			cout << "Please enter a value between 0 and 9999: ";
			cin >> e_num;
		}
	}

	cout << "The Employee Number is: " << empTest.getEmpNum() << endl;*/


	//****** PRODUCTION WORKER EXCEPTION TEST ******//

	/*cout << endl << "///// PRODUCTION WORKER EXCEPTION TEST /////" << endl << endl;

	
	ProductionWorker ProdTest; // your code here

	int Prod_shift;
	int Prod_pr;

	cout << "Enter Shift: ";
	cin >> Prod_shift;

	//tryagain = true;
	
	while (tryagain)
	{
		try
		{
			ProdTest.setShift(Prod_shift);

			tryagain = false;
		}

		catch (ProductionWorker::InvalidShift)
		{
			cout << "Please enter either 1 or 2: ";
			cin >> Prod_shift;
		}
	}

	cout << "The Production Worker shift is: " << ProdTest.getShift() << endl << endl;

	cout << "Enter Pay Rate: ";
	cin >> Prod_pr;

	tryagain = true;
	while (tryagain)
	{
		//cout << "While loop entered";
		try
		{
			ProdTest.setPayRate(Prod_pr);

			tryagain = false;
		}

		catch (ProductionWorker::InvalidPayrate)
		{
			cout << "Please enter a non-negative value: ";
			cin >> Prod_pr;
		}
	}

	cout << "The Production Worker Pay Rate is: " << ProdTest.getHourlyPay() << endl << endl;*/


	//****** SELECT SCREEN EXCEPTION TEST ******//

	cout << endl << "///// SELECT SCREEN EXCEPTION TEST /////" << endl << endl;

	bool choicetrue = true;
	int emp_choice;

	while (true)
	{
		cout << "// SELECT AN EMPLOYEE TYPE" << endl
			<< "1. Produciton Worker" << endl
			<< "2. Shift Supervisor" << endl
			<< "3. Team Leader" << endl
			<< "4. Exit" << endl;

		cin >> emp_choice;

		
		cout << "Enter Employee Number: ";
		cin >> e_num;

		//Employee 

		while (tryagain)
		{
			try
			{
				Employee temp;

				temp.setEmpNum(e_num);

				tryagain = false;
			}

			catch (Employee::InvalidEmployeeNumber)
			{
				cout << "Please enter a value between 0 and 9999: ";
				cin >> e_num;
			}
		}


		if (emp_choice == 1)
		{
			ProductionWorker* pw = new ProductionWorker();

			pw->setEmpNum(e_num);

			cout << "Enter Shift: ";
			cin >> Prod_shift;

			//tryagain = true;

			while (tryagain)
			{
				try
				{
					pw->setShift(Prod_shift);

					tryagain = false;
				}

				catch (ProductionWorker::InvalidShift)
				{
					cout << "Please enter either 1 or 2: ";
					cin >> Prod_shift;
				}
			}

			//cout << "The Production Worker shift is: " << ProdTest.getShift() << endl << endl;

			cout << "Enter Pay Rate: ";
			cin >> Prod_pr;

			tryagain = true;
			while (tryagain)
			{
				//cout << "While loop entered";
				try
				{
					pw->setPayRate(Prod_pr);

					tryagain = false;
				}

				catch (ProductionWorker::InvalidPayrate)
				{
					cout << "Please enter a non-negative value: ";
					cin >> Prod_pr;
				}
			}

			pw->printProdWorkInfo();

			delete pw;

			cout << endl;
		}

		else if (emp_choice == 2)
		{
			double salary;
			double bonus;


		}

		else if (emp_choice == 3)
		{
			TeamLeader* tl = new TeamLeader();
			tl->setEmpNum(e_num);

			cout << "Enter Shift: ";
			cin >> Prod_shift;

			//tryagain = true;

			while (tryagain)
			{
				try
				{
					tl->setShift(Prod_shift);

					tryagain = false;
				}

				catch (ProductionWorker::InvalidShift)
				{
					cout << "Please enter either 1 or 2: ";
					cin >> Prod_shift;
				}
			}

			//cout << "The Production Worker shift is: " << ProdTest.getShift() << endl << endl;

			cout << "Enter Pay Rate: ";
			cin >> Prod_pr;

			tryagain = true;
			while (tryagain)
			{
				//cout << "While loop entered";
				try
				{
					tl->setPayRate(Prod_pr);

					tryagain = false;
				}

				catch (ProductionWorker::InvalidPayrate)
				{
					cout << "Please enter a non-negative value: ";
					cin >> Prod_pr;
				}
			}

			tl->printProdWorkInfo();

			delete tl;

			cout << endl;

		}

		else if (emp_choice == 4)
		{
			break;
		}
	}

}