#include "libro.h"
#include <iostream>
#include <string>
#include <set>

libro::libro(std::string editorial, std::set(std::string) palabrasDes) : Publicacion() {
    this->editorial = editorial;
    this->palabrasDes = palabrasDes;
};

libro:: ~libro(){
    /*
    this->palabrasDes.clear();
    this->~Publicacion();
    delete this;
    */
};

std::string libro:: getEditorial(){
    return this->editorial;
};

std::string getPDestacadas(){
    return this->palabrasDes;
};

void libro::setEditorial(std::string e){
    this->editorial = e;
};

void libro::setPDestacadas(set(std::string) ss){
    this->palabrasDes = ss; 
};

bool libro::contienePalabra(std::string palabra){
    return (this->palabrasDes.find(palabra) != this->palabrasDes.end);
};


