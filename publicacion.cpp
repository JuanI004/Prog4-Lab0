#include "publicacion.hh"

Publicacion::Publicacion(){
    this->DOI = "";
    this->Titulo = "";
    this->Fecha = DTFecha();
};

Publicacion::Publicacion(std::string DOI, std::string Titulo, DTFecha Fecha){
    this->DOI=DOI;
    this->Titulo=Titulo;
    this->Fecha=Fecha;
};

Publicacion:: ~Publicacion(){
};

std::string Publicacion::getDOI(){
    return this->DOI;
};

std::string Publicacion::getTitulo(){
    return this->Titulo;
};

DTFecha Publicacion:: getFecha(){
    return this->Fecha;
};

std::vector<Investigador*> Publicacion::getAutores(){
    return this->autores;
};

void Publicacion::agregarAutor(Investigador* autor){
    this->autores.push_back(autor);
};

DTRefer Publicacion::getDT(){
    std::vector<std::string> nombres;
    for(int i=0; i<autores.size(); i++){
        nombres.push_back(autores[i]->getNombre());
    }
    return DTRefer(this->DOI, this->Titulo, this->Fecha, nombres);
};

void Publicacion::setDOI(std::string DOI) {
    this->DOI = DOI;
};

void Publicacion::setTitulo(std::string Titulo) {
    this->Titulo = Titulo;
};

void Publicacion::setFecha(DTFecha Fecha) {
    this->Fecha = Fecha;
};
