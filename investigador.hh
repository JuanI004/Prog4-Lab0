#ifndef INVESTIGADOR_HH
#define INVESTIGADOR_HH

#include "publicacion.hh" 
#include <map>
#include <set>

class Investigador{
    private:
        std::string ORCID; 
        std::string nombre;
        std::string institucion;
        std::map<std::string, Publicacion*> publicaciones;
    public:
        Investigador(std::string, std::string, std::string);
        ~Investigador();
        std::string getORCID();
        std::string getNombre();
        std::string getInstitucion();
        std::map<std::string, Publicacion*> getPublicaciones();
        void agregarPublicacion(Publicacion*);
        void eliminarPublicacion(Publicacion*);
        void setORCID(std::string ORCID);
        void setNombre(std::string nombre);
        void setInstitucion(std::string institucion);
        std::string toString();
        std::set<std::string> listarPublicaciones(DTFecha desde, std::string palabra);
};

#endif
