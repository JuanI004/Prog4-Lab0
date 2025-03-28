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
};

int DTFecha::getDia() const{
    return this->dia;
};

int DTFecha::getMes() const{
    return this->mes;
};

int DTFecha::getAnio() const{
    return this->anio;
};

std::ostream& operator<<(std::ostream& os, const DTFecha& f){
    os << f.dia << "/" << f.mes << "/" << f.anio;
    return os;
};

DTFecha& DTFecha::operator=(const DTFecha& f){
    if (this != &f) {
        this->dia = f.dia;
        this->mes = f.mes;
        this->anio = f.anio;
    };
    return *this;
};

bool DTFecha::operator>=(const DTFecha& f) const {
    if (this->anio > f.anio)
        return true;
    else if (this->anio == f.anio) {
        if (this->mes > f.mes)
            return true;
        else if (this->mes == f.mes) {
            if (this->dia >= f.dia)
                return true;
        }
    }
    return false;
};
