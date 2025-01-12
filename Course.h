#pragma once
#include "Student.h"
#include"Register.h"
const int NUM_COURSES = 3;
const int COURSE_COLUMNS = 2;

class Course
{
	
private:
	std::string Courses[NUM_COURSES][COURSE_COLUMNS];
	std::string Professor;
	std::string Code;
	std::string nameCourse;
	int Credits;
public:
	Course();
	Course(std::string professor, std::string code, std::string name_Course, int credits);
	std::string getProfessor();
	std::string getCode();
	std::string getnameCourse();
	int getCredits();
	void setProfessor(std::string professor);
	void setCode(std::string code);
	void setnameCourse(std::string name_Course);
	void setCredits(int credits);
	void loadCourses(std::string Courses[NUM_COURSES][COURSE_COLUMNS]);
	bool validCourse(std::string code, std::string Courses[NUM_COURSES][COURSE_COLUMNS]);
	void showCourses(std::string professor, std::string code, std::string name_Course, int credits);
};

