#pragma once
#include <iostream>

class Course {
private:

    std::string Professor;
    std::string Code;
    std::string nameCourse;
    int Credits;

public:
    Course();
    Course(const std::string& prof, const std::string& code, const std::string& name, int credits);

    std::string getCode() const;
    std::string getNameCourse() const;
    int getCredits() const;
    std::string getProfessor() const;

};


