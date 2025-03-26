#include "articuloRevista.h"

articuloRevista :: articuloRevista(std::string r, std::string e) : Publicacion(){
    this->revista = r;
    this->extracto = e;
};

articuloRevista :: ~articuloRevista(){
    /*
    this->~Publicacion();
    delete this;
    */
};

std::string articuloRevista:: getRevista(){
    return this->revista;
};

std::string articuloRevista:: getExtracto(){
    return this->extracto;
};

void articuloRevista:: setRevista(std::string r){
    this->revista = r;
};

void articuloRevista:: setExtracto(std::string e){
    this->extracto = e;
};

bool articuloRevista:: contienePalabra(std::string s){
    return this->extracto.contain(s);
};