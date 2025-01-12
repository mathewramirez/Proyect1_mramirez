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
	int availableHours[5][2]; 
	std::string coursePerSchedule[5];
	int hourCount; 
public:
	Schedule();
	void assignCourseToSchedule(std::string coursePerSchedule[5],int scheduleIndex, std::string courseName);
	void addAvailableHour(int availableHours[5][2], int& hourCount, int hourInicial, int hourFinal);
	void setScheduleDetails(int hourInicial, int hourFinal, int classroom, std::string day);
	int getcalculateDuration();
	void displaySchedule(int availableHours[5][2], std::string coursePerSchedule[5]);
	bool isHourAvailable(int availableHours[5][2], int hourCount, int hourInicial, int hourFinal);
};

