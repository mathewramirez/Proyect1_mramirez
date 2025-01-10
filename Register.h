#pragma once
#include "Schedule.h"
class Register
{
private:
	Student studentPresent[30];
	Course coursePresent[5];
	Schedule schedulePresent[12];
	int courseCount;
	int courseValue;
	int studentsCount;
	int scheduleCount;
	double Credits;

public:
	Register();
	Register(Student student, Course course, Schedule schedule, int course_Value);
	void addStudents(std::string name, std::string id, std::string career, int level);
	void addCourse(std::string professor, std::string code, std::string name_Course, int credits);
	void addSchedule(int hour_Inicial, int classroom, int hour_Final, int day);
	int getCourseValue(int course_Value);
	void costCalculator();
};

