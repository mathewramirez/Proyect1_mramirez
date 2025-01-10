#include "Student.h"

Student::Student()
{
	Name = "";
	Id = "";
	Career = "";
	Level = 0;
}

Student::Student(std::string name, std::string id, std::string career, int level)
{
}

std::string Student::getName(std::string name)
{
	return Name;
}

std::string Student::getId(std::string id)
{
	return Id;
}

std::string Student::getCarrer(std::string career)
{
	return Career;
}

int Student::getLevel(int level)
{
	return Level;
}

void Student::setName(std::string name)
{
	this->Name = name;
}

void Student::setId(std::string id)
{
	this->Id = id;
}

void Student::setCareer(std::string career)
{
	this->Career = career;
}

void Student::setLevel(int level)
{
	this->Level = level;
}

