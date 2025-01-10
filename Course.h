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
	std::string getProfessor(std::string professor);
	std::string getCode(std::string code);
	std::string getnameCourse(std::string name_Course);
	int getCredits(int credits);
	void setProfessor(std::string professor);
	void setCode(std::string code);
	void setnameCourse(std::string name_Course);
	void setCredits(int credits);
};

