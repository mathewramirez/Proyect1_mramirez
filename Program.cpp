#include "Program.h"
#include "Register.h"
#include"Course.h"
void Program::program()
{
   
        Register register1;
        int numStudents;

        std::cout << "¿Cuántos estudiantes deseas agregar? ";
        std:: cin >> numStudents;

        for (int i = 0; i < numStudents; i++) {
           std:: string name= " ", id = " ", career = " ";
            int level=0;

            std::cout << "\nEstudiante " << i + 1 << ":\n";
            std::cout << "Nombre: ";
            std::cin >> name;
            std:: cout << "ID: ";
            std::cin >> id;
            std::cout << "Carrera: ";
            std::cin >> career;
            while (true) {
                std::cout << "level (solo numeros): ";
                std::cin >> level;

                if (std::cin.fail() || level <= 0) {
                    std::cin.clear();  
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Por favor, ingresa un número válido positivo.\n";
                }
                else {
                    break;  
                }
            }
            register1.addStudents(name, id, career, level); 
        }

        register1.ShowstudentPresent();

      Course course; 
        int numCourses;
       std::string code;
        std::cout << "¿Cuántos cursos deseas asignar? ";
        std::cin >> numCourses; 

        for (int j = 0; j < numCourses; j++) {
            std::string course;
            std::cout << "ingresar codigo de curso ";
            std::cin >> code;
           
            std::cout << "Curso " << j + 1 << ": ";
            std::cin >> course;
            
        }

        register1.setCoursePresents(numCourses);
}


