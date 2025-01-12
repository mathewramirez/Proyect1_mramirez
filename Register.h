#pragma once
#include "Student.h"
#include "Schedule.h"
#include "Course.h"
#include <iostream>
class Register {
private:
    Student studentPresent[30];
    Course coursePresent[5];
    Course courseDefined[5][2];
    Schedule schedulePresent[12];
    Schedule scheduleDefined[5];
    int courseCount = 0;
    int courseValue = 0;
    int studentsCount = 0;
    int scheduleCount = 0;
    double Credits = 0.0;

public:
	Register();
    void addStudents(Student studentPresent[30], int studentsCount ,std::string name, const std::string id, const std::string career, int level) {
    }
    void addCourse(Course coursePresent[5],int courseCount, std::string professor, const std::string code, const std::string name_Course, int credits) {
    }
    void addSchedule(int hour_Inicial, int classroom, int hour_Final, std::string day) {
    }
    void showStudentPresent(int studentsCount, Student studentPresent[], std::string name, std::string id, const std::string career, int level)  {
    }
    void showCoursePresent(int courseCount, Course coursePresent[], std::string professor, std::string code, std::string name_Course, int credits)  {
    }
    void costCalculator(int courseCount, Course coursePresent[], double courseValue) {
    }
    void setCourseDefined(Course courseDefined[5][2], std::string code1, std::string code2, int index) {
    }
};


