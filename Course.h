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
    // Constructor parametrizado
    Course(std::string& prof, std::string& code, std::string& name, int credits);
    // Setters
    void setProfessor(const std::string& prof);
    void setCode(const std::string& code);
    void setNameCourse(std::string& name);
    void setCredits(int credits);
    std::string getCode();
    std::string getNameCourse();
    int getCredits();
    std::string getProfessor();

    // Metodo para agregar información a Courses
    void setCourseInfo(int index, const std::string& col1, const std::string& col2, const std::string& col3);


    // Metodo para mostrar información de Courses
    void displayCourses();

    // Metodo para mostrar información del curso
    void displayCourseInfo();
    
};



