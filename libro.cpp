#include "libro.h"


libro::libro(std::string editorial, std::set<std::string> palabrasDes) : Publicacion() {
    this->editorial = editorial;
    this->palabrasDes = palabrasDes;
};

libro:: ~libro(){
   
};

std::string libro:: getEditorial(){
    return this->editorial;
};

std::set<std::string> libro::getPDestacadas(){
    return this->palabrasDes;
};

void libro::setEditorial(std::string e){
    this->editorial = e;
};

void libro::setPDestacadas(std::set<std::string> ss){
    this->palabrasDes = ss; 
};

bool libro::contienePalabra(std::string palabra){
    return (this->palabrasDes.find(palabra) != this->palabrasDes.end());
};


