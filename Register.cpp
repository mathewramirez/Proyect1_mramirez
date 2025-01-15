#include "Register.h"



Register::Register() {
    this->courseCount = 0;
    this->studentsCount = 0;
    this->Credits = 0;
    this->scheduleCount = 0;
    this->courseValue = 0;
}

void Register::addStudents() {
    std::string name, id, career;
        int level=0; 
        if (studentsCount < 30) {
            Student newstudent;
            std::cout << "Ingrese el nombre del estudiante: ";
            std::cin >> name;
            newstudent.setName(name);

            std::cout << "Ingrese la Id: ";
            std::cin >> id;
            newstudent.setId(id);

            std::cout << "Ingrese carrera: ";
            std::cin >> career;
            newstudent.setCareer(career);

            std::cout << "Ingrese nivel: ";
            std::cin >> level;
            newstudent.setLevel(level);

            studentPresent[studentsCount++] = newstudent;
        }
        else {
            std::cout << "No se pueden agregar más estudiantes, el registro está lleno.\n";
        }
    
}

void Register::addCourse() {
    std::string professor, code, name_Course;
    int credits=0;

        if (courseCount < 5) { // Asegura que no exceda el tamaño del arreglo
            Course newCourse;

            std::cout << "Ingrese el nombre del curso:  " << std::endl; 
            std::cin >> name_Course;
            newCourse.setNameCourse(name_Course);

            std::cout << "Ingrese el nombre del profesor: " << std::endl; ;
            std::cin >> professor;
            newCourse.setProfessor(professor);

            std::cout << "Ingrese el code: ";
            std::cin >> code;
            newCourse.setCode(code);

            std::cout << "Ingrese el número de credits: " << std::endl; ;
            std::cin >> credits;
            newCourse.setcredits(credits);
            coursePresent[courseCount++] = newCourse;
        }
        else {
            std::cout << "No se pueden agregar más cursos, el límite está alcanzado.\n";
        }
}
    


void Register::addSchedule() {
    int hour_Inicial = 0, hour_Final = 0, classroom = 0;
    std::string day;
    if (scheduleCount < 12) {
        Schedule newschedule;  

        std::cout << "Ingrese la hora inicial: " << std::endl; ;
        std::cin >> hour_Inicial;
        newschedule.setHourInicial(hour_Inicial);

        std::cout << "Ingrese la hora final: " << std::endl; ;
        std::cin >> hour_Final;
        newschedule.setHourFinal(hour_Final);

        std::cout << "Ingrese la aula: " << std::endl; ;
        std::cin >> classroom;
        newschedule.setClassroom(classroom);

        std::cout << "Ingrese el dia: " << std::endl; 
        std::cin >> day;
        newschedule.setDay(day); 
        schedulePresent[courseCount++] = newschedule;
    }
    else {
        std::cout << "No se pueden agregar más cursos, el límite está alcanzado.\n";
    }
}
void Register::showStudentPresent() {
    for (int i = 0; i < studentsCount; i++) {
        studentPresent[i].ShowStudent();
    }
}

void Register::showCoursePresent() {
    for (int i = 0; i < courseCount; i++) {
        coursePresent[i].getNameCourse();
    }
}

void Register::costCalculator() {
    double totalCost = 0;
    for (int i = 0; i < courseCount; i++) {
        totalCost += coursePresent[i].getCredits() * courseValue;
    }
    std::cout << "Costo total del registro: " << totalCost << "\n";
}

bool Register::hasScheduleConflict() {
    for (int i = 0; i < courseCount; ++i) {
        if (coursePresent[i] == newCourse) {
            return true;
        }
    }
    return false;
}








