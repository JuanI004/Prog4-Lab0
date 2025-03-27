#include "DTFecha.hh"

DTFecha::DTFecha(){
    this->dia = 0;
    this->mes = 0;
    this->anio = 0;
};

DTFecha::DTFecha(int dia, int mes, int anio){
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
};

DTFecha::~DTFecha(){
    //delete this;
};

int DTFecha::getDia(){
    return this->dia;
};

int DTFecha::getMes(){
    return this->mes;
};

int DTFecha::getAnio(){
    return this->anio;
};

std::ostream& operator<<(std::ostream& os, DTFecha& f){
    os << f.dia << "/" << f.mes << "/" << f.anio;
    return os;
};

DTFecha& DTFecha::operator=(DTFecha& f){
    if (this != &f) {
        this->dia = f.dia;
        this->mes = f.mes;
        this->anio = f.anio;
    };
    return *this;
};