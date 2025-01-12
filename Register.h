#pragma once
#include "Student.h"
#include "Schedule.h"
#include "Course.h"
#include <iostream>
class Register
{
private:
	Student studentPresent[30];
	Course coursePresent[5];
	Course  courseDefined[5];
	Schedule schedulePresent[12];
	Schedule scheduleDefined[5];
	int courseCount;
	int courseValue;
	int studentsCount;
	int scheduleCount;
	double Credits;

public:
	Register();
	void addStudents(std::string name, std::string id, std::string career, int level);
	void addCourse(std::string professor, std::string code, std::string name_Course, int credits);
	void addSchedule(int hour_Inicial, int classroom, int hour_Final, int day);
	int getCourseValue(int course_Value);
	void costCalculator();
	void ShowstudentPresent();
	void courseofLevel(int level);
	void setCoursePresents(int courseCount); 
	void courseDefined(std::string courseDefined[]);

};

