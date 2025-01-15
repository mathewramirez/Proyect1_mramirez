#include "Program.h"
#include "Register.h"
#include"Course.h"
#include"Student.h"
void Program::program()
{
}
    bool exitProgram = false;


    void Program::showFileMenu() {
        char option;
        while (true) {
            system("CLS");
            std::cout << "=== Archivo ===" << std::endl;
            std::cout << "1) Acerca de" << std::endl;
            std::cout << "2) Ir al Menu principal" << std::endl;
            std::cout << "3) Salir del Programa" << std::endl;
            std::cout << "Ingrese alguna opcion disponible: " << std::endl;
            std::cin >> option;

            if (std::cin.fail() || std::cin.peek() != '\n') {
                std::cout << "Error: entrada no valida." << std::endl;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                continue;
            }

            switch (option) {
            case '1':
                std::cout << "Mostrando informacion acerca del Programa:" << std::endl;
                std::cout << "Autor: Mathew Ramirez Gomez." << std::endl;
                std::cout << "Nombre del Programa: Matricula." << std::endl;
                std::cout << "Curso: Programacion I verano." << std::endl;
                std::cout << "id: 6-0484-0500." << std::endl;
                std::cout << "Carrera: Ingenieria en Sistemas de Informacion." << std::endl;
                std::cout << "PD: Ya saben, si lo pueden imaginar, lo pueden programar." << std::endl;
                break;
            case '2':
                return;
            case '3':
                exitProgram = true;
                return;
            default:
                std::cout << "Opcion no valida, intente de nuevo." << std::endl;
                break;
            }
        }
    }

    void Program::ShowMaintenanceMenu() {
        char option;
        Register registeer;
        Student student;
        std::string name;
        std::string id;
        std::string career;
        int level;
        Course course;
        std::string nameCourse;
        std::string code;
        std::string Professor;
        int credits;
        Schedule schedule;
        std::string day;
        int HourInicial;
        int HourFinal;
        int classroom;

        while (true) {
            system("CLS");
            std::cout << "=== Mantenimiento ===" << std::endl;
            std::cout << "1) Estudiantes" << std::endl;
            std::cout << "2) Cursos" << std::endl;
            std::cout << "3) Horarios" << std::endl;
            std::cout << "4) Matricula" << std::endl;
            std::cout << "5) Consulta" << std::endl;
            std::cout << "Ingrese alguna opcion disponible: " << std::endl;
            std::cin >> option;

            if (std::cin.fail() || std::cin.peek() != '\n') {
                std::cout << "Error: entrada no valida." << std::endl;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                continue;
            }

            switch (option) {
            case '1': {
                char subOption;
                while (true) {
                    system("CLS");
                    std::cout << "=== Estudiante ===" << std::endl;
                    std::cout << "1) Registrar estudiante" << std::endl;
                    std::cout << "2) Regresar" << std::endl;
                    std::cout << "Ingrese alguna opcion disponible: " << std::endl;
                    std::cin >> subOption;

                    if (std::cin.fail() || std::cin.peek() != '\n') {
                        std::cout << "Error: entrada no valida." << std::endl;
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        continue;
                    }

                    switch (subOption) {
                    case '1':
                        std::cout << "1) Registrar Nombre" << std::endl;
                        std::cin >> name;
                        student.setName(name);
                        std::cout << "2) Registrar Cedula" << std::endl;
                        std::cin >> id;
                        student.setId(id);
            
                        std::cout << "3) Registrar carrera" << std::endl;
                        std::cin >> career;
                        student.setCareer(career);
                        std::cout << "4) Registrar nivel" << std::endl;
                        std::cin >> level;
                        student.setLevel(level);
                        registeer.addStudents();
                        break;
                    case '2':
                        return;
                    default:
                        std::cout << "Opcion no valida, intente de nuevo." << std::endl;
                        break;
                    }
                }
                break;
            }
            case '2': {
                char subOption;
                while (true) {
                    system("CLS");
                    std::cout << "=== Curso ===" << std::endl;
                    std::cout << "1) Registrar curso" << std::endl;
                    std::cout << "2) Regresar" << std::endl;
                    std::cout << "Ingrese alguna opcion disponible: " << std::endl;
                    std::cin >> subOption;

                    if (std::cin.fail() || std::cin.peek() != '\n') {
                        std::cout << "Error: entrada no valida." << std::endl;
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        continue;
                    }

                    switch (subOption) {
                    case '1':
                        std::cout << "Registrar Nombre del curso" << std::endl;
                        std::cin >> nameCourse;
                        course.setNameCourse(nameCourse);
                        std::cout << "Registrar Codigo" << std::endl;
                        std::cin >> code;
                        course.setCode(code);
                        std::cout << "Registrar creditos" << std::endl;
                        std::cin >> credits;
                        course.setcredits(credits);
                        std::cout << "Registrar Nombre de profesor" << std::endl;
                        std::cin >> Professor;
                        course.setProfessor(Professor);
                        break;
                    case '2':
                        return;
                    default:
                        std::cout << "Opcion no valida, intente de nuevo." << std::endl;
                        break;
                    }
                }
                break;
            }
            case '3': {
                char subOption;
                while (true) {
                    system("CLS");
                    std::cout << "=== Horarios ===" << std::endl;
                    std::cout << "1) Registrar Horario" << std::endl;
                    std::cout << "2) Regresar" << std::endl;
                    std::cout << "Ingrese alguna opcion disponible: " << std::endl;
                    std::cin >> subOption;

                    if (std::cin.fail() || std::cin.peek() != '\n') {
                        std::cout << "Error: entrada no valida." << std::endl;
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        continue;
                    }

                    switch (subOption) {
                    case '1':
                        std::cout << "Registrar dia" << std::endl;
                        std::cin >> day;
                        schedule.setDay(day);
                        std::cout << "Registrar hora inicial" << std::endl;
                        std::cin >> HourInicial;
                        schedule.setHourInicial(HourInicial);
                        std::cout << "Registrar hora final" << std::endl;
                        std::cin >> HourFinal;
                        schedule.setHourFinal(HourFinal);
                        std::cout << "Registrar aula" << std::endl;
                        std::cin >> classroom;
                        schedule.setClassroom(classroom);
                        break;
                    case '2':
                        return;
                    default:
                        std::cout << "Opcion no valida, intente de nuevo." << std::endl;
                        break;
                    }
                }
                break;
            }
            case '4':
                // Código de Matricula
                break;
            case '5':
                // Código de Consulta
                break;
            default:
                std::cout << "Opcion no valida, intente de nuevo." << std::endl;
                break;
            }
        }
    }
