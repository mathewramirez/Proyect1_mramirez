#pragma once
#include "Course.h"
#include <iostream>
class Schedule
{
private:
	int hourInicial;
	int hourFinal;
	int classRoom;
	std::string day; 
public:
	Schedule();
	Schedule(int hourInicial, int hourFinal, int class_Room, std::string& day);
	std::string getday();
	int gethourInicial();
	int getdayhourFinal();
	int getClassRoom();
};

