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
	
	// Employee Variables
	int e_num;
	string e_name;
	string e_hiredate;
	
	// Production Worker Variables 
	int Prod_shift;
	int Prod_pr;

	//Shift Supervisor Variables
	double salary;
	double bonus;

	// Team Leader Variables
	double monthlybonus;
	int reqtraininghours;
	int attendtraininghours;


	
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

		
		// Catch and throw loop for ensuring the Employee Number
		// is an acceptable value
		while (tryagain)
		{
			try
			{
				Employee temp;

				temp.setEmpNum(e_num);

				// If there are no issues with the Employee Number value
				// end the while loop
				tryagain = false;
			}

			// If there is an issue, display the following
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

			// Catch and throw loop for ensuring the shift entered
			// is an acceptable value
			while (tryagain)
			{
				try
				{
					pw->setShift(Prod_shift);

					// If there are no issues with the shift value
					// end the while loop
					tryagain = false;
				}

				// If there is an issue, display the following
				catch (ProductionWorker::InvalidShift)
				{
					std::cout << "Please enter either 1 or 2: ";
					std::cin >> Prod_shift;
				}
			}


			std::cout << "Enter Pay Rate: ";
			std::cin >> Prod_pr;

			tryagain = true;

			// Catch and throw loop for ensuring the PayRate entered
			// is an acceptable value
			while (tryagain)
			{
				try
				{
					pw->setPayRate(Prod_pr);

					// If there are no issues with the PayRate value
					// end the while loop
					tryagain = false;
				}

				// If there is an issue, display the following
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

			std::cout << "Enter Monthly Bonus: ";
			std::cin >> monthlybonus;
			tl->setMonthBonus(monthlybonus);

			std::cout << "Enter Required Training Hours: ";
			std::cin >> reqtraininghours;
			tl->setRegTrainingHours(reqtraininghours);

			std::cout << "Enter Attended Training Hours: ";
			std::cin >> attendtraininghours;
			tl->setAttendTrainHours(attendtraininghours);
			
			std::cout << "Enter Shift: ";
			std::cin >> Prod_shift;


			tryagain = true;

			// Catch and throw loop for ensuring the shift entered
			// is an acceptable value
			while (tryagain)
			{
				try
				{
					tl->setShift(Prod_shift);


					// If there are no issues with the shift value
					// end the while loop
					tryagain = false;
				}

				// If there is an issue, display the following
				catch (ProductionWorker::InvalidShift)
				{
					std::cout << "Please enter either 1 or 2: ";
					std::cin >> Prod_shift;
				}
			}


			std::cout << "Enter Pay Rate: ";
			std::cin >> Prod_pr;

			// Catch and throw loop for ensuring the PayRate entered
			// is an acceptable value
			tryagain = true;
			while (tryagain)
			{
				try
				{
					tl->setPayRate(Prod_pr);

					
					// If there are no issues with the PayRate value
					// end the while loop
					tryagain = false;
				}

				// If there is an issue, display the following
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