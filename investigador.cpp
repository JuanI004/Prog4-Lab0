#include <iostream>
#include <string>
#include "DTRefer.h"
#include <map>
#include "investigador.h"

Investigador::Investigador(std::string ORCID, std::string nombre, std::string institucion){
    this->ORCID = ORCID;
    this->nombre = nombre;
    this->institucion = institucion;
}
Investigador::~Investigador(){
    this->publicaciones.clear();
}
std::string Investigador::getORCID(){
    return this->ORCID;
}
std::string Investigador::getNombre(){
    return this->nombre;
}
std::string Investigador::getInstitucion(){
    return this->institucion;
}
void Investigador::setORCID(std::string ORCID){
    this->ORCID = ORCID;
}
void Investigador::setNombre(std::string nombre){
    this->nombre = nombre;
}
void Investigador::setInstitucion(std::string institucion){
    this->institucion = institucion;
}
std::string Investigador::toString(){
    return this->ORCID + "->" + this->nombre + "/" + this->institucion;
}
std::set<std::string> Investigador::listarPublicaciones(DTFecha desde, std::string palabra){
}
