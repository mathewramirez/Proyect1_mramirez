#include "Course.h"

Course::Course()
{
	 Professor=" ";
      Code=" ";
	nameCourse=" ";
	Credits=0;
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

    void loadCourses(std::string Courses[NUM_COURSES][COURSE_COLUMNS]) { 
        Courses[0][0] = "CS101";   Courses[0][1] = "Programación Básica";
        Courses[1][0] = "MATH204"; Courses[1][1] = "Cálculo II";
        Courses[2][0] = "PHY301";  Courses[2][1] = "Física Moderna";
        Courses[3][0] = "CHEM150"; Courses[3][1] = "Química General";
        Courses[4][0] = "ENG202";  Courses[4][1] = "Inglés Técnico";
    }

    bool validCourse(const std::string & code, std::string Courses[NUM_COURSES][COURSE_COLUMNS]) {
        for (int i = 0; i < NUM_COURSES; i++) {
            if (Courses[i][0] == code) {
                std::cout << "Curso encontrado: " << Courses[i][1] << " [" << Courses[i][0] << "]\n";
                return true;
            }
        }
        std::cout << "Error: Código de curso no encontrado.\n";
        return false;
    }

  



