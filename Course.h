#pragma once
#include "Student.h"
class Course
{
private:
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
};

