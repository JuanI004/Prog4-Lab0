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
        std::string getDOI();
        std::string getTitulo();
        DTFecha getFecha();
        std::vector<std::string> getAutores();
        ~DTRefer();
        friend std::ostream& operator<<(std::ostream& os,DTRefer& dt);
};