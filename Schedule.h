#pragma once
#include "Course.h"
#include <iostream>
class Schedule
{
private:
	std::string Schendules[5];
	int hourInicial;
	int ClassRoom;
	int hourFinal;
	std::string Day;
	int hours[9][2];
public:
	Schedule();
	Schedule(int hour_Inicial, int classroom, int hour_Final, std::string day);
	int getHourInicial();
	int getClassroom();
	int getHourFinal();
	std::string getDay();
	void setHourInicial(int hour_Inicial);
	void setClassroom(int classroom);
	void setHourFinal(int hour_Final);
	void setDay(std::string day);
	void initializeSchedules(std::string schendules[5]);
	void getHours(int hours[9][2]);
};

