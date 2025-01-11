#pragma once
#include "Course.h"
class Schedule
{
private:
	int hourInicial;
	int ClassRoom;
	int hourFinal;
	int Day;
public:
	Schedule();
	Schedule(int hour_Inicial, int classroom, int hour_Final, int day);
	int getHourInicial();
	int getClassroom();
	int getHourFinal();
	int getDay();
	void setHourInicial(int hour_Inicial);
	void setClassroom(int classroom);
	void setHourFinal(int hour_Final);
	void setDay(int day);
	
};

