#include "TeamLeader.h"

#include <iostream>
#include <iomanip>

TeamLeader::TeamLeader(string e_name, int e_num, string H_date, int s, double h_pay,
						double m_bon, int rth, int ath)
						: ProductionWorker(e_name, e_num, H_date, s, h_pay), 
						MonthBonus(m_bon), RegTrainingHours(rth), AttendTrainHours(ath)
{
}

void TeamLeader::setMonthBonus(double m_bon)
{
	MonthBonus = m_bon;
}

void TeamLeader::setRegTrainingHours(int rth)
{
	RegTrainingHours = rth;
}

void TeamLeader::setAttendTrainHours(int ath)
{
	AttendTrainHours = ath;
}

void TeamLeader::printTeamLeaderInfo() const
{
	printProdWorkInfo();

	cout << left << setw(18) << "Monthly Bonus: $" << MonthBonus << endl;
	cout << left << setw(27) << "Regular Training Hours: " << RegTrainingHours << endl;
	cout << left << setw(27) << "Attended Training Hours: " << AttendTrainHours << endl;
}