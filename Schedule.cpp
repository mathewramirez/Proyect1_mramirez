#include "Schedule.h"

Schedule::Schedule()
{
}

Schedule::Schedule(int hour_Inicial, int classroom, int hour_Final, int day)
{
	this->Day = day;
	this->ClassRoom = classroom;
	this->hourFinal= hour_Final;
	this->hourInicial = hour_Inicial;
}

int Schedule::getHourInicial(int hour_Inicial)
{
	return hourInicial;
}

int Schedule::getClassroom(int classroom)
{
	return ClassRoom;
}

int Schedule::getHourFinal(int hour_Final)
{
	return hourFinal;
}

int Schedule::getDay(int day)
{
	return Day;
}

int Schedule::setHourInicial(int hour_Inicial)
{
	this->hourInicial = hour_Inicial;
}

int Schedule::setClassroom(int classroom)
{
	this->ClassRoom = classroom;
}

int Schedule::setHourFinal(int hour_Final)
{
	this->hourFinal = hour_Final;
}

int Schedule::setDay(int day)
{
	this->Day = day;
}
