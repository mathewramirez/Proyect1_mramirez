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
	this->Name = name;
	this->Id = id;
	this->Career = career;
	this->Level = level;
}

std::string Student::getName()
{
	return Name;
}

std::string Student::getId()
{
	return Id;
}

std::string Student::getCareer()
{
	return Career;
}

int Student::getLevel()
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
void Student::ShowStudent(std::string name, std::string id, std::string career, int level){
	std::cout << "Nombre: " << name << "\n"
		<< "ID: " << id << "\n"
		<< "Carrera: " << career << "\n"
		<< "Nivel: " << level << "\n"
		<< "------------------------------\n";
}

