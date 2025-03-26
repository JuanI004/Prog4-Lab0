#include <string>
#include <vector>
#include "DTRefer.h"
//#include "investigador.h"
#include "DTFecha.h"
#include <iostream>

class Investigador;

class Publicacion{
    private:
        std::string DOI;
        std::string Titulo;
        DTFecha Fecha;
        std::vector<Investigador*> autores; 
    public:
        Publicacion();
        Publicacion(std::string DOI, std::string Titulo, DTFecha Fecha);
        ~Publicacion();
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


