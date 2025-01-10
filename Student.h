#pragma once
#include "Program.h"
class Student
{
private:
	std::string Name;
	std::string Id;
	std::string Career;
	int Level;
public:
	Student();
	Student(std::string name, std::string id, std::string career, int level);
	std::string getName();
	std::string getId();
	std::string getCareer();
	int getLevel();
	void setName(std::string name);
	void setId(std::string id);
	void setCareer(std:: string career);
	void setLevel(int level);
};

