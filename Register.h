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
    void addStudents();
    void addCourse();
    void addSchedule();
    void showStudentPresent();
    void showCoursePresent();
    void costCalculator();
    bool hasScheduleConflict();
};


