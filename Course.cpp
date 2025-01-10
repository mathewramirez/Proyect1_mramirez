#include "Course.h"

Course::Course()
{
}

Course::Course(std::string professor, std::string code, std::string name_Course, int credits)
{
	this->Professor= professor;
	this->Code=code ;
	this->nameCourse =name_Course ;
	this->Credits =credits ;
}

std::string Course::getProfessor(std::string professor)
{
	return Professor;
}

std::string Course::getCode(std::string code)
{
	return Code;
}

std::string Course::getnameCourse(std::string name_Course)
{
	return nameCourse; 
}

int Course::getCredits(int credits)
{
	return Credits; 
}

void Course::setProfessor(std::string professor)
{
	this->Professor = professor;
}


void Course::setCode(std::string code)
{
	this->Code = code;
}

void Course::setnameCourse(std::string name_Course)
{
	this->nameCourse = name_Course;
}

void Course::setCredits(int credits)
{
	this->Credits = credits; 
}
