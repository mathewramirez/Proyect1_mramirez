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
    void addStudents(Student studentPresent[30], std::string name, std::string id, std::string career, int level);
    void addCourse(Course coursePresent[5], std::string professor, std::string code, std::string name_Course, int credits);
    void addSchedule(Schedule schedulePresent[12], int hour_Inicial, int classroom, int hour_Final, std::string day);
    void showStudentPresent(Student studentPresent[30]);
    void showCoursePresent(Course coursePresent[5]);
    void costCalculator(Course coursePresent[5]);
    void setCourseDefined(Course courseDefined[5][2], std::string code1, std::string code2, int index);

};


