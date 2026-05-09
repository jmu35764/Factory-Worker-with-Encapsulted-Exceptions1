#include <iostream>
#include <iomanip>
#include <string>


#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"

using namespace std;

int main()
{
	bool tryagain = true;
	
	int e_num;
	string e_name;
	string e_hiredate;
	
	int Prod_shift;
	int Prod_pr;
	
	//****** SELECT SCREEN EXCEPTION TEST ******//

	std::cout << endl << "///// SELECT SCREEN EXCEPTION TEST /////" << endl << endl;

	bool choicetrue = true;
	int emp_choice;

	while (true)
	{
		std::cout << "// SELECT AN EMPLOYEE TYPE" << endl
			<< "1. Produciton Worker" << endl
			<< "2. Shift Supervisor" << endl
			<< "3. Team Leader" << endl
			<< "4. Exit" << endl;

		std::cin >> emp_choice;

		
		std::cout << "Enter Employee Name: ";
		std::cin.ignore();
		std::getline(std::cin, e_name);

		std::cout << "Enter Hire Date: ";
		std::cin >> e_hiredate;

		std::cout << "Enter Employee Number: ";
		std::cin >> e_num;

		
	
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
				std::cout << "Please enter a value between 0 and 9999: ";
				std::cin >> e_num;
			}
		}

		
		if (emp_choice == 1)
		{
			tryagain = true;
			ProductionWorker* pw = new ProductionWorker();

			pw->setEmpNum(e_num);
			pw->setName(e_name);
			pw->setHireDate(e_hiredate);

			std::cout << "Enter Shift: ";
			std::cin >> Prod_shift;

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
					std::cout << "Please enter either 1 or 2: ";
					std::cin >> Prod_shift;
				}
			}

			//std::cout << "The Production Worker shift is: " << ProdTest.getShift() << endl << endl;

			std::cout << "Enter Pay Rate: ";
			std::cin >> Prod_pr;

			tryagain = true;
			while (tryagain)
			{
				//std::cout << "While loop entered";
				try
				{
					pw->setPayRate(Prod_pr);

					tryagain = false;
				}

				catch (ProductionWorker::InvalidPayrate)
				{
					std::cout << "Please enter a non-negative value: ";
					std::cin >> Prod_pr;
				}
			}

			std::cout << endl;

			pw->printProdWorkInfo();

			delete pw;

			std::cout << endl;
		}

		else if (emp_choice == 2)
		{
			double salary;
			double bonus;

			ShiftSupervisor* ss = new ShiftSupervisor;

			ss->setEmpNum(e_num);
			ss->setName(e_name);
			ss->setHireDate(e_hiredate);

			std::cout << "Enter Salary: ";
			std::cin >> salary;
			ss->setAnnSalary(salary);

			std::cout << "Enter bonus: ";
			std::cin >> bonus;
			ss->setAnnBonus(bonus);

			std::cout << endl;
			
			ss->printShiftSupInfo();

			delete ss;

			std::cout << endl;



		}

		else if (emp_choice == 3)
		{
			TeamLeader* tl = new TeamLeader();
			tl->setEmpNum(e_num);

			std::cout << "Enter Shift: ";
			std::cin >> Prod_shift;

			//tryagain = true;

			tryagain = true;
			while (tryagain)
			{
				try
				{
					tl->setShift(Prod_shift);

					tryagain = false;
				}

				catch (ProductionWorker::InvalidShift)
				{
					std::cout << "Please enter either 1 or 2: ";
					std::cin >> Prod_shift;
				}
			}

			//std::cout << "The Production Worker shift is: " << ProdTest.getShift() << endl << endl;

			std::cout << "Enter Pay Rate: ";
			std::cin >> Prod_pr;

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
					std::cout << "Please enter a non-negative value: ";
					std::cin >> Prod_pr;
				}
			}

			std::cout << endl;
			
			tl->printProdWorkInfo();

			delete tl;

			std::cout << endl;

		}

		else if (emp_choice == 4)
		{
			break;
		}
	}

}