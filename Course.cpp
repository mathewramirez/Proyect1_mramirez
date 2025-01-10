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

std::string Course::getProfessor()
{
	return Professor;
}

std::string Course::getCode()
{
	return Code;
}

std::string Course::getnameCourse()
{
	return nameCourse; 
}

int Course::getCredits()
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
