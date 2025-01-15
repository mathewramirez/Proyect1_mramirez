#include "Schedule.h"


Schedule::Schedule() {
    hourInicial = 0;
    hourFinal = 0;
    classRoom = 0;
    Day = "";

}

Schedule::Schedule(int hour_Inicial, int hour_Final, int class_Room, std::string& day)
{
        this->hourInicial = hour_Inicial;
        this->hourFinal = hour_Final;
        this->classRoom = class_Room;
        this->Day = day;
}
 
std::string Schedule::getday()
{
    return Day;
}

int Schedule::gethourInicial()
{
    return hourInicial;
}

int Schedule::getdayhourFinal()
{
    return hourFinal;
}

int Schedule::getClassRoom()
{
    return classRoom;
}

void Schedule::setDay(std::string& day)
{
    this->Day = day;
}

void Schedule::setHourInicial(int hour_Inicial)
{
    this->hourInicial = hour_Inicial;
}

void Schedule::setHourFinal(int hour_Final)
{
    this->hourFinal = hour_Final;

}

void Schedule::setClassroom(int class_Room)
{
    this->classRoom = class_Room;
}




