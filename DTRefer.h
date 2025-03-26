#include <vector>
#include "DTFecha.h"

class DTRefer {
    private:
        std::string DOI;
        std::string titulo;
        DTFecha fecha;
        std::vector<std::string> autores;
    public:
        DTRefer(std::string doi, std::string titulo, DTFecha fecha, std::vector<std::string> autores);
        std::string getDOI();
        std::string getTitulo();
        DTFecha getFecha();
        std::vector<std::string> getAutores();
        ~DTRefer();
        friend std::ostream& operator<<(std::ostream& os,DTRefer& dt);
};