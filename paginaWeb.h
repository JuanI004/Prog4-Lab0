#include "publicacion.h"

class PaginaWeb: public Publicacion{
    private:
        std::string url;
        std::string contenidoExtraido;
    public:
        PaginaWeb(std::string url, std::string contenido);
        ~PaginaWeb();
        std::string getUrl();
        std::string getContenidoExtraido();
        void setUrl(std::string url);
        void setContenidoExtraido(std::string contenido);
        virtual bool contienePalabra(std::string palabra);
};