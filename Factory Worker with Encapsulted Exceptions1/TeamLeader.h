#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker
{
private:
	double MonthBonus;
	int RegTrainingHours;
	int AttendTrainHours;

public:
	//Constructor
	TeamLeader(string e_name = " ", int e_num = 0, string H_date = " ", int s = 1, double h_pay = 0.0, 
				double m_bon = 0.0, int rth = 0, int ath = 0);

	//Setter
	void setMonthBonus(double m_bon);

	void setRegTrainingHours(int rth);

	void setAttendTrainHours(int ath);

	//Getter
	double getMonthBonus() const
	{
		return MonthBonus;
	}

	int getRegTrainingHours() const
	{
		return RegTrainingHours;
	}

	int getAttendTrainHours() const
	{
		return AttendTrainHours;
	}

	//Print Info

	void printTeamLeaderInfo() const;

};

#endif