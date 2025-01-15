#include "Register.h"



Register::Register() {
    this->courseCount = 0;
    this->studentsCount = 0;
    this->Credits = 0;
    this->scheduleCount = 0;
    this->courseValue = 0;
}

void Register::addStudents(Student studentPresent[30], std::string name, std::string id, std::string career, int level) {
    if (studentsCount < 30) {
        studentPresent[studentsCount]=Student(name, id, career, level); 
        studentsCount++;
    }
    else {
        std::cout << "No se pueden agregar más estudiantes, el registro está lleno.\n";
    }
}

void Register::addCourse(Course coursePresent[5], std::string professor, std::string code, std::string name_Course, int credits) {
    if (courseCount < 5) {
        coursePresent[courseCount] = Course(professor, code, name_Course, credits);
        courseCount++;
    }
    else {
        std::cout << "No se pueden agregar más cursos, el límite está alcanzado.\n";
    }
}

void Register::addSchedule(Schedule schedulePresent[12], int hour_Inicial, int classroom, int hour_Final, std::string day) {
    if (scheduleCount < 12) {
        schedulePresent[scheduleCount].Schedule::Schedule(hour_Inicial, hour_Final, classroom, day);
        scheduleCount++;
    }
    else {
        std::cout << "No se pueden agregar más horarios, el registro está lleno.\n";
    }
}

void Register::showStudentPresent(Student studentPresent[30]) {
    for (int i = 0; i < studentsCount; i++) {
        studentPresent[i].ShowStudent();
    }
}

void Register::showCoursePresent(Course coursePresent[5]) {
    for (int i = 0; i < courseCount; i++) {
        coursePresent[i].getNameCourse();
    }
}

void Register::costCalculator(Course coursePresent[5]) {
    double totalCost = 0;
    for (int i = 0; i < courseCount; i++) {
        totalCost += coursePresent[i].getCredits() * courseValue;
    }
    std::cout << "Costo total del registro: " << totalCost << "\n";
}







