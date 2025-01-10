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
	int getHourInicial(int hour_Inicial);
	int getClassroom(int classroom);
	int getHourFinal(int hour_Final);
	int getDay(int day);
	int setHourInicial(int hour_Inicial);
	int setClassroom(int classroom);
	int setHourFinal(int hour_Final);
	int setDay(int day);
};

