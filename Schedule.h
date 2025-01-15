#pragma once
#include "Course.h"
#include <iostream>
class Schedule
{
private:
	int hourInicial;
	int hourFinal;
	int classRoom;
	std::string Day; 
public:
	Schedule();
	Schedule(int hourInicial, int hourFinal, int class_Room, std::string& day);
	std::string getday();
	int gethourInicial();
	int getdayhourFinal();
	int getClassRoom();
	void setDay(std::string& day);
	void setHourInicial(int hourInicial);
	void setHourFinal(int hourFinal);
	void setClassroom(int class_Room);
};

