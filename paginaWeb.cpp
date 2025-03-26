#include "paginaWeb.h"

PaginaWeb::PaginaWeb(std::string url, std::string contenidoExtraido) : Publicacion() {
    this->url = url;
    this->contenidoExtraido = contenidoExtraido;
};

PaginaWeb:: ~PaginaWeb() {
    /*
    this->~Publicacion();
    delete this;
    */
};

std::string PaginaWeb::getUrl() {
    return this->url;
};

std::string PaginaWeb::getContenidoExtraido() {
    return this->contenidoExtraido;    
};

void PaginaWeb::setUrl(std::string url) {
    this->url = url;
};

void PaginaWeb::setContenidoExtraido(std::string contenidoExt) {
    contenidoExtraido = contenidoExt;
};

bool PaginaWeb::contienePalabra(std::string palabra){
    return this->contenidoExtraido.contains(palabra);
};