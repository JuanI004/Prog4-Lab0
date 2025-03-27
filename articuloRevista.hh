#include "publicacion.hh"

class articuloRevista: public Publicacion {
    private:
        std::string revista;
        std::string extracto;
    public:
        articuloRevista(std::string, std::string);
        ~articuloRevista();
        std::string getRevista();
        std::string getExtracto();
        void setRevista(std::string revista);
        void setExtracto(std::string extracto);
        virtual bool contienePalabra(std::string palabra);
};
