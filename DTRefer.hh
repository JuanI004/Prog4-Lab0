#ifndef DTREFER_HH
#define DTREFER_HH

#include <vector>
#include "DTFecha.hh"

class DTRefer {
    private:
        std::string DOI;
        std::string titulo;
        DTFecha fecha;
        std::vector<std::string> autores;
    public:
        DTRefer(std::string, std::string, DTFecha, std::vector<std::string>);
        ~DTRefer();
        std::string getDOI() const;
        std::string getTitulo() const;
        DTFecha getFecha() const;
        std::vector<std::string> getAutores() const;
        friend std::ostream& operator<<(std::ostream& os, const DTRefer& dt);
};

#endif
