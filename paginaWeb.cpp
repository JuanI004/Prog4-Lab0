#include "publicacion.h"
#include "paginaWeb.h"
#include <string>

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

void setUrl(std::string url) {
    this->url = url;
};

void setContenidoExtraido(std::string contenidoExt) {
    this->contenidoExtraido = contenidoExt;
};

bool PaginaWeb::contienePalabra(std::string palabra){
    return this->contenidoExtraido.contains(palabra);
};