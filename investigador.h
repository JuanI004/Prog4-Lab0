#include <iostream>
#include <string>
#include "publicacion.h" 
#include "DTRefer.h"
#include <map>

class Publicacion;

class Investigador{
    private:
        std::string ORCID; 
        std::string nombre;
        std::string institucion;
        std::map<int, Publicacion> publicaciones;
    public:
        Investigador(std::string ORCID, std::string nombre, std::string institucion);
        ~Investigador();
        std::string getORCID();
        std::string getNombre();
        std::string getInstitucion();
        void setORCID(std::string ORCID);
        void setNombre(std::string nombre);
        void setInstitucion(std::string institucion);
        std::string toString();
        std::set<std::string> listarPublicaciones(DTFecha desde, std::string palabra);
};