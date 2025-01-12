#include "Schedule.h"




Schedule::Schedule(){ 
    this->hourInicial = 0;
  this->hourFinal = 0;
 this->classRoom = 0;
    this->hourCount=0;
       this->day= "";  

}
void Schedule::addAvailableHour(int availableHours[5][2], int& hourCount, int hourInicial, int hourFinal) {
    if (hourCount < 5) {
        availableHours[hourCount][0] = hourInicial;
        availableHours[hourCount][1] = hourFinal;
        hourCount++;
    }
    else {
        std::cout << "No se pueden agregar más bloques de horarios.\n";
    }
}

void Schedule::displaySchedule(int availableHours[5][2], std::string coursePerSchedule[5]) {
    std::cout << "Día: " << day << "\n"
        << "Aula: " << classRoom << "\n"
        << "Hora Inicial: " << hourInicial << ":00\n"
        << "Hora Final: " << hourFinal << ":00\n";

    std::cout << "Horarios disponibles:\n";
    for (int i = 0; i < hourCount; i++) {
        std::cout << "Bloque " << i + 1 << ": "
            << availableHours[i][0] << ":00 - "
            << availableHours[i][1] << ":00\n";
    }

    std::cout << "Asignación de cursos:\n";
    for (int i = 0; i < 5; i++) {
        if (!coursePerSchedule[i].empty()) {
            std::cout << "Bloque " << i + 1 << ": " << coursePerSchedule[i] << "\n";
        }
    }
}

    void Schedule::setScheduleDetails(int hourInicial, int hourFinal, int classroom, std::string day) {
        this->hourInicial = hourInicial;
        this->hourFinal = hourFinal;
        this->classRoom = classroom;
         this->day= day;
    }



    void Schedule::assignCourseToSchedule(std::string coursePerSchedule[5], int scheduleIndex, std::string courseName) {
            if (scheduleIndex >= 0 && scheduleIndex < 5) {  // Suponiendo que hay 5 horarios disponibles
                coursePerSchedule[scheduleIndex] = courseName;
            }
            else {
                std::cout << "Índice de horario inválido.\n";
            }
    }


    int Schedule::getcalculateDuration(){
        return hourFinal - hourInicial;
    }


    bool Schedule::isHourAvailable(int availableHours[5][2], int hourCount, int hourInicial, int hourFinal) {
        for (int i = 0; i < hourCount; i++) {
            if (availableHours[i][0] == hourInicial && availableHours[i][1] == hourFinal) {
                return true;
            }
        }
        return false;
    }


