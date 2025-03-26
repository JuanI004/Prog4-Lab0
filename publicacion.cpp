#include "publicacion.h"
#include "investigador.h" 


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
    /*this->Fecha = this->~Fecha();
    delete this->autores;
    delete this;
    */
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

/*#include "Publicacion.h"
#include "Investigador.h"

// Constructor
Publicacion::Publicacion(const std::string& doi, const std::string& titulo, const DTFecha& fecha)
    : doi(doi), titulo(titulo), fecha(fecha) {}

// Destructor
Publicacion::~Publicacion() {}

// Getters
std::string Publicacion::getDOI() const {
    return doi;
}

std::string Publicacion::getTitulo() const {
    return titulo;
}

DTFecha Publicacion::getFecha() const {
    return fecha;
}

std::vector<Investigador*> Publicacion::getAutores() const {
    return autores;
}

// Agregar autor a la lista de autores
void Publicacion::agregarAutor(Investigador* autor) {
    autores.push_back(autor);
}

// Obtener los datos de la publicación en formato DTRefer
DTRefer Publicacion::getDT() const {
    std::vector<std::string> nombresAutores;
    for (const auto& autor : autores) {
        nombresAutores.push_back(autor->getNombre());
    }
    return DTRefer(doi, titulo, fecha, nombresAutores);
}

// Sobrecarga del operador <<
std::ostream& operator<<(std::ostream& os, const Publicacion& pub) {
    os << pub.getDT();
    return os;
}*/
