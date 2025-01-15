#include "Course.h"
#include <iostream>

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
void Course::setCode(const std::string& code)
{
    this->Code = code;

}
void Course::setNameCourse(const std::string& name)
{
    this->nameCourse = name;
}
void Course::setcredits(int credits)
{
    this->Credits = credits;
}
void Course::setHourFinal(int Hourfinal)
{
    this->Hourfinal = Hourfinal;
}
void Course::setHourInicial(int HourInicial)
{
    this->HourInicial= HourInicial;
}
int Course::getHourInicial() const
{
    return HourInicial;
}
int Course::getHourFinal() const
{
    return Hourfinal;
}
void Course::setProfessor(const std::string& prof)
{
    this->Professor = prof;

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




  



