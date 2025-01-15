#include "Course.h"
#include <iostream>
// Constructor por defecto
Course::Course() {
    Professor = "";
    Code = "";
    nameCourse="";
    Credits = 0;
}


Course::Course(const std::string& prof, const std::string& code, const std::string& name, int credits){
this->Professor = prof;
this->Code = code;
this->nameCourse = name;
this->Credits = credits;
}
std::string Course::getProfessor() const {
    return Professor; 
}


std::string Course::getCode()const {
    return Code; 
}


std::string Course::getNameCourse() const {
    return nameCourse; 
}
int Course::getCredits()const {
    return Credits; 
}




  



