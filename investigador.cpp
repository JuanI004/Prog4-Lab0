#include "investigador.hh"

Investigador::Investigador(std::string ORCID, std::string nombre, std::string institucion){
    this->ORCID = ORCID;
    this->nombre = nombre;
    this->institucion = institucion;
};

Investigador::~Investigador(){
};

std::string Investigador::getORCID(){
    return this->ORCID;
};

std::string Investigador::getNombre(){
    return this->nombre;
};

std::string Investigador::getInstitucion(){
    return this->institucion;
};

void Investigador::setORCID(std::string ORCID){
    this->ORCID = ORCID;
};

void Investigador::setNombre(std::string nombre){
    this->nombre = nombre;
};

void Investigador::setInstitucion(std::string institucion){
    this->institucion = institucion;
};

std::map<std::string, Publicacion*> Investigador:: getPublicaciones(){
    return this->publicaciones;
};

void Investigador:: agregarPublicacion(Publicacion* p){
    this->publicaciones.insert(std::make_pair(p->getDOI(), p));
};

void Investigador:: eliminarPublicacion(Publicacion* p){
    this->publicaciones.erase(p->getDOI());
};

std::string Investigador::toString(){
    return this->ORCID + "->" + this->nombre + "/" + this->institucion;
};

std::set<std::string> Investigador:: listarPublicaciones(DTFecha desde, std::string palabra){
    std::set<std::string> ret;
    std::map<std::string, Publicacion*>::iterator it;
    for(it = this->publicaciones.begin(); it != this->publicaciones.end(); ++it) {
        Publicacion* pub = it->second;
        if(pub != NULL){
            if(pub->getFecha() >= desde) {
                std::string titulo = pub->getTitulo();
                if(palabra.empty() || pub->contienePalabra(palabra)){
                    ret.insert(pub->getDOI());
                }
            }    
        }
    }
    return ret;
};
