#include "Schedule.h"

Schedule::Schedule()
{
	Day = "";
	ClassRoom = 0;
	hourFinal = 0;
	hourInicial =0 ;
}


Schedule::Schedule(int hour_Inicial, int classroom, int hour_Final, std::string day)
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

std::string Schedule::getDay()
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

void Schedule::setDay(std::string day)
{
	this->Day = day;
}

void Schedule:: initializeSchedules(std::string schendules[5])
{
	
		this->Schendules[0] = "Lunes";
		this->Schendules[1] = "Martes";
		this->Schendules[2] = "Miercoles";
		this->Schendules[3] = "Jueves";
		this->Schendules[4] = "Viernes";
}

void Schedule::getHours(int hours[9][2])
{
	hours[0][0] = 8;  hours[0][1] = 11;
	hours[1][0] = 9;  hours[1][1] = 11;
	hours[2][0] = 10; hours[2][1] = 11;
	hours[3][0] = 11; hours[3][1] = 12;
	hours[4][0] = 1;  hours[4][1] = 3;
	hours[5][0] = 2;  hours[5][1] = 4;
	hours[6][0] = 3;  hours[6][1] = 5;
	hours[7][0] = 4;  hours[7][1] = 6;
	hours[8][0] = 5;  hours[8][1] = 7;
}

