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
        Course course;
        Schedule schedule;


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
                        registeer.addCourse();
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
                        registeer.addSchedule();
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
                
                int option;
                std::cout << "\n=== Sistema de Matricula ===" << std::endl;
                std::cout << "1) Registrar Curso" << std::endl;
                std::cout << "3) Salir" << std::endl;
                std::cout << "Seleccione una opcion: ";
                std::cin >> option;

                switch (option) {
                case 1: {
                    std::string code, name, professor;
                    int credits;
                    std::cout << "Ingrese el código del curso: ";
                    std::cin >> code;
                    std::cout << "Ingrese el nombre del curso: ";
                    std::cin, name;
                    std::cout << "ingrese Profesor: ";
                    std::cin >> professor;
                    std::cout << "Ingrese credits: ";
                    std::cin >> credits;

                    Course newCourse(professor, code, name, credits);
                    registeer.addCourse();
                    break;
                }
                case 2:
                    registeer.showCoursePresent();
                    break;
                case 3:
                    std::cout << "Saliendo del programa..." << std::endl;
                    break;
                default:
                    std::cout << "Opcion no valida. Intente de nuevo." << std::endl;
                }


            case 5:
                Register reg;
                char sub_option=0;
                std::cout << "=== Consulta ===" << std::endl;
                std::cout << "1) mostrar cursos asignados" << std::endl;
                std::cout << "2) mostrar estudiantes matriculados" << std::endl;
                std::cout << "Ingrese alguna opcion disponible: " << std::endl;
                std::cin >> option;

                if (std::cin.fail() || std::cin.peek() != '\n') {
                    std::cout << "Error: entrada no valida." << std::endl;
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    continue;
                }

                switch (sub_option) {
                case '1':
                    reg.showCoursePresent();
                case '2':
                    reg.showStudentPresent();
                    break;
                default:
                    std::cout << "Opcion no valida, intente de nuevo." << std::endl;
                    break;
                }
            }
        }
    }
    