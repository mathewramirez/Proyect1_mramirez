// Proyect1_mramirez.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "Register.h"
#include "Student.h"
#include "Schedule.h"
#include "Course.h"
#include "Program.h"
#include <iostream>

int main()
{
    Program program;
    char option;
    while (true) {
        system("CLS");
        std::cout << "======== Menu ========" << std::endl;
        std::cout << "a) Archivo" << std::endl;
        std::cout << "b) Mantenimiento" << std::endl;
        std::cout << "c) Matricula" << std::endl;
        std::cout << "d) Consulta" << std::endl;
        std::cout << "Ingrese alguna opcion disponible: " << std::endl;
        std::cin >> option;
        if (std::cin.fail() || std::cin.peek() != '\n') {
            std::cout << "Error: entrada no valida." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        switch (option) {
        case 'a':
            program.showFileMenu();
            break;
        case 'b':
            program.ShowMaintenanceMenu();
            break;
        case 'c':
            program.showMenuregister();
            break;
        case 'd':
            program.showconsult();
            break;
        break;
        default:
            std::cout << "Opcion no valida, intente de nuevo." << std::endl;
            break;
        }
    }
    return 0;
}



