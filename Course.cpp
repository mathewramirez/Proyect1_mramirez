#include "Course.h"
#include <iostream>
// Constructor por defecto
Course::Course() {
    Professor = "";
    Code = "";
    nameCourse="";
    Credits = 0;
}

// Constructor parametrizado
Course::Course(const std::string& prof, const std::string& code, const std::string& name, int credits)
    : Professor(prof), Code(code), nameCourse(name), Credits(credits) {
}

// Setters
void Course::setProfessor(const std::string& prof) { 
    Professor = prof; 
}
void Course::setCode(const std::string& code) { 
    Code = code; 
}
void Course::setNameCourse(std::string& name) {
    nameCourse = name; 
}
void Course::setCredits(int credits) { 
    Credits = credits; 
}

// Getters
std::string Course::getProfessor() { 
    return Professor; 
}


std::string Course::getCode() {
    return Code; 
}


std::string Course::getNameCourse() { 
    return nameCourse; 
}
int Course::getCredits() { 
    return Credits; 
}

// Metodo para agregar información a Courses
void Course::setCourseInfo(int index, const std::string& col1, const std::string& col2, const std::string& col3) {
    if (index >= 0 && index < NUM_COURSES) {
        Courses[index][0] = col1;
        Courses[index][1] = col2;
        Courses[index][2] = col3;
    }
    else {
        std::cout << "Índice fuera de rango. No se puede agregar la información del curso." << std::endl;
    }
}

// Metodo para mostrar información de Courses
void Course::displayCourses()  {
    std::cout << "Listado de Cursos:\n";
    std::cout << "Columna 1\tColumna 2\tColumna 3\n";
    for (int i = 0; i < NUM_COURSES; ++i) {
        if (!Courses[i][0].empty()) {
            std::cout << Courses[i][0] << "\t" << Courses[i][1] << "\t" << Courses[i][2] << std::endl;
        }
    }
}


// Metodo para mostrar información del curso
void Course::displayCourseInfo() {
    std::cout << "Información del Curso:\n";
    std::cout << "Nombre: " << nameCourse << "\n";
    std::cout << "Código: " << Code << "\n";
    std::cout << "Profesor: " << Professor << "\n";
    std::cout << "Créditos: " << Credits << "\n";
}


  



