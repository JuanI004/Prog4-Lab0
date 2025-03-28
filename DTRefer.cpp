#include "DTRefer.hh"

DTRefer::DTRefer(std::string DOI, std::string titulo, DTFecha fecha, std::vector<std::string> autores){
    this->DOI = DOI;
    this->titulo = titulo;
    this->fecha = fecha;
    this->autores = autores;
}
std::string DTRefer::getDOI() const {
    return this->DOI;
}
std::string DTRefer::getTitulo() const {
    return this->titulo;
}
DTFecha DTRefer:: getFecha() const {
    return fecha;
}
std::vector<std::string>  DTRefer::getAutores() const {
    return this->autores;
}
DTRefer::~DTRefer() {
    this->autores.clear();
}

std::ostream& operator<<(std::ostream& os, const DTRefer& dt) {
    os << dt.DOI << "->" << dt.titulo << "(" << dt.fecha << ")/";
    
    for (size_t i = 0; i < dt.getAutores().size(); i++) {
        os << dt.autores[i];
        if (i < dt.getAutores().size() - 1) {
            os << ",";
        }
    }
 
    return os;
}