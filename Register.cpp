#include "Register.h"


Register::Register()
{
	courseCount = 0;
	courseValue = 0;
	studentsCount = 0;
	scheduleCount = 0;
	Credits = 0;
	
}


void Register::addStudents(std::string name, std::string id, std::string career, int level)
{
	Student student(name,id,career,level);

	studentPresent[studentsCount] = student;
	studentsCount++;
}

void Register::addCourse(std::string professor, std::string code, std::string name_Course, int credits)
{
	Course course;
	course.setProfessor(professor);
	course.setCode(code);
	course.setnameCourse(name_Course);
	this->Credits = credits; 
	coursePresent[courseCount] = course;
	courseCount++;

}

void Register::addSchedule(int hour_Inicial, int classroom, int hour_Final, int day)
{
	Schedule schedule;
	schedule.getHourInicial();
	schedule.getHourFinal();
	schedule.getClassroom();
	schedule.getDay();
	schedulePresent[scheduleCount] = schedule;
	scheduleCount++;

}

int Register::getCourseValue(int course_Value)
{
	return courseValue;
}

void Register::costCalculator()
{
	courseValue = Credits * 12.512;
	std::cout << "El costo de matricula es: " << courseValue << std:: endl;
}

void Register::ShowstudentPresent()
{
	for (int i = 0; i < studentsCount; i++) {
		std::cout << "Student " << i + 1 << ": "
			<< studentPresent[i].getName() << ", "
			<< studentPresent[i].getId() << ", "
			<< studentPresent[i].getCareer() << ", "
			<< studentPresent[i].getLevel() << std::endl;
	}
}

void Register::courseofLevel(int level)
{
	
}

void Register::setCoursePresents(int courseCount)
{

	this->courseCount = courseCount;
	coursePresent[courseCount];
}

void Register::courseDefined(std::string courseDefined[])
{
	courseDefined[0] = "CS101";  courseDefined[5] = "Programación Básica";
	courseDefined[1] = "MATH204"; courseDefined[6] = "Cálculo II";
	courseDefined[2] = "PHY301";  courseDefined[7] = "Física Moderna";
	courseDefined[3] = "CHEM150"; courseDefined[8] = "Química General";
	courseDefined[4] = "ENG202";  courseDefined[9] = "Inglés Técnico";
}




