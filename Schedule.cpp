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

int Schedule::getHourInicial()
{
	return hourInicial;
}

int Schedule::getClassroom()
{
	return ClassRoom;
}

int Schedule::getHourFinal()
{
	return hourFinal;
}

int Schedule::getDay()
{
	return Day;
}

void Schedule::setHourInicial(int hour_Inicial)
{
	this->hourInicial = hour_Inicial;
}

void Schedule::setClassroom(int classroom)
{
	this->ClassRoom = classroom;
}

void Schedule::setHourFinal(int hour_Final)
{
	this->hourFinal = hour_Final;
}

void Schedule::setDay(int day)
{
	this->Day = day;
}
