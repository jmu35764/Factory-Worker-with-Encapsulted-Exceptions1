#include <iostream>
#include <iomanip>
#include <string>


#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"


int main()
{
	//****** EMPLOYEE CLASS TEST ******//

	cout << "///// EMPLOYEE CLASS TEST /////" << endl << endl;
	
	
	cout << "Current Employee Info" << endl;

	Employee Emp("John", 1234, "10 / 05 / 2001");

	Emp.printEmpInfo();

	// Setter TEST
	Emp.setName("Miles Morales");
	Emp.setEmpNum(5678);
	Emp.setHireDate("06/06/2001");

	// Getter TEST
	cout << endl;
	cout << "New Employee Name: " <<Emp.getName() << endl;
	cout << "New Employee Number: " << Emp.getEmpNum() << endl;
	cout << "New Empoyee Hire Date: " << Emp.getHireDate() << endl;


	cout << endl << "New Employee Info" << endl;
	Emp.printEmpInfo();


	//****** PRODUCTION WORKER CLASS TEST ******//

	cout << endl << "///// PRODUCTION WORKER CLASS TEST /////" << endl << endl;

	cout << "DAY SHIFT WORKER" << endl;
	
	ProductionWorker pw1("Mason", 1001, "11/11/2011", 1, 23.00);

	cout << endl;
	pw1.printProdWorkInfo();

	cout << "NIGHT SHIFT WORKER" << endl;

	ProductionWorker pw2("Shane Ta", 5050, "01/01/2012", 2, 23.00);

	cout << endl;
	pw2.printProdWorkInfo();


	//****** SHIFT SUPERVISOR CLASS TEST ******//
	 
	cout << endl << "///// SHIFT SUPERVISOR CLASS TEST /////" << endl << endl;

	ShiftSupervisor ss("Andrew Myers", 2020, "04/15/2016", 4000.00, 500.00);

	cout << endl;
	ss.printShiftSupInfo();


	//****** TEAM LEADER CLASS TEST ******//

	cout << endl << "///// TEAM LEADER CLASS TEST /////" << endl << endl;

	TeamLeader tl("Jason James", 1984, "02/24/2010", 1, 35.00, 0.5, 30, 25);
	cout << endl;
	tl.printTeamLeaderInfo();

}