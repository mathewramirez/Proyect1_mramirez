#include "Register.h"

Register::Register()
{
}

Register::Register(Student student, Course course, Schedule schedule, int course_Value)
{
}

Register::Register()
{
	courseCount = 0;
	courseValue = 0;
	studentsCount = 0;
	scheduleCount = 0;
}

void Register::addStudents(std::string name, std::string id, std::string carrer, int level)
{
	Student student;
	student.setName(name);
	student.setId(id);
	student.setCareer(name);
	student.setLevel(level);
	studentPresent[studentsCount] = student;
	studentsCount++;
}

void Register::addCourse(std::string professor, std::string code, std::string name_Course, int credits)
{
	Course course;
	course.setProfessor(professor);
	course.setCode(code);
	course.setnameCourse(name_Course);
	this->courseValue = credits;
	coursePresent[courseCount] = course;
	courseCount++;

}

void Register::addSchedule(int hour_Inicial, int classroom, int hour_Final, int day)
{
	Schedule schedule;
	schedule.setHourInicial(hour_Inicial);
	schedule.setHourFinal(hour_Final);
	schedule.setClassroom(classroom);
	schedule.setDay(day);
	schedulePresent[scheduleCount] = schedule;
	scheduleCount++;

}

int Register::getCourseValue(int course_Value)
{
	return courseValue;
}

void Register::costCalculator()
{
	courseValue = Credits * 12,512;
	std::cout << "El costo de matricula es: " << courseValue << std:: endl;
}


