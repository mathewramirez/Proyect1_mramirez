#include "Register.h"


Register::Register()
{
	this->courseCount = 0;
	this->studentsCount = 0;
	this->Credits= 0;
	this->scheduleCount= 0;
	this->courseValue= 0;
	
}

void addStudents(Student studentPresent[30],int studentsCount, std::string name, const std::string id, const std::string career, int level) {
        if (studentsCount < 30) {
            studentPresent[studentsCount] = Student(name, id, career, level);
            studentsCount++;
        }
        else {
            std::cout << "No se pueden agregar mas estudiantes, el registro está lleno.\n";
        }
    }

    void addCourse(Course coursePresent[], int courseCount, std::string professor, const std::string code, std::string name_Course, int credits) {
        if (courseCount < 5) {
            coursePresent[courseCount] = Course(professor, code, name_Course, credits);
            courseCount++;
        }
        else {
            std::cout << "No se pueden agregar más cursos, el límite está alcanzado.\n";
        }
    }

    void addSchedule(Schedule schedulePresent[12], int scheduleCount, int hour_Inicial, int classroom, int hour_Final, std::string day) {
        if (scheduleCount < 12) {
            schedulePresent[scheduleCount] = Schedule(hour_Inicial, classroom, hour_Final, day);
            scheduleCount++;
        }
        else {
            std::cout << "No se pueden agregar más horarios, el registro está lleno.\n";
        }
    }

    void showStudentPresent(int studentsCount, Student studentPresent[] ,std::string name,std::string id,  std::string career, int level) {
        for (int i = 0; i < studentsCount; i++) {
            studentPresent[i].ShowStudent(name, id, career,level);
        }
    }


    void showCoursePresent(int courseCount, Course coursePresent[], std::string professor, std::string code, std::string name_Course, int credits) {
        for (int i = 0; i < courseCount; i++) {
            coursePresent[i].showCourses( professor, code,name_Course,credits); 
        }
    }


    void costCalculator(int courseCount, Course coursePresent[], double courseValue) {
        double totalCost = 0;
        for (int i = 0; i < courseCount; i++) {
            totalCost += coursePresent[i].getCredits() * courseValue;
        }
        std::cout << "Costo total del registro: " << totalCost << "\n";
    }


    void setCourseDefined( Course courseDefined[5][2],std::string code1, std::string code2, int index) {
        if (index >= 0 && index < 5) {
            courseDefined[index][0] = Course(code1, "", "", 0);  
            courseDefined[index][1] = Course(code2, "", "", 0);
        }
    }




