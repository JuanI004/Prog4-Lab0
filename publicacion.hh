#ifndef PUBLICACION_HH
#define PUBLICACION_HH

#include <string>
#include "DTRefer.hh"
#include <iostream>

class Investigador;

class Publicacion {
    private:
        std::string DOI;
        std::string Titulo;
        DTFecha Fecha;
        std::vector<Investigador*> autores; 
    public:
        Publicacion();
        Publicacion(std::string, std::string, DTFecha);
        virtual ~Publicacion();
        std::string getDOI();
        std::string getTitulo();
        DTFecha getFecha();
        std::vector<Investigador*> getAutores();
        void agregarAutor(Investigador* autor);
        DTRefer getDT();
        void setDOI(std::string DOI);
        void setTitulo(std::string Titulo);
        void setFecha(DTFecha Fecha);
        virtual bool contienePalabra(std::string palabra)=0;
};

//#include "investigador.hh"

#endif
