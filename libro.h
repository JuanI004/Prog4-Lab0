#include "publicacion.h"
#include <iostream>
#include <string>
#include <set>
class libro : public Publicacion{
    private:
       std::string editorial;
       std::set(std::string) palabrasDes;
    public:
       libro(std::string editorial, std::set(std::string) palabrasDes);
       ~libro();
       std:: string getEditorial();
       std:: string getPDestacadas();
       void setEditorial(std::string editorial);
       void setPDestacadas(std::set(std::string) palabrasDes);
       virtual bool contienePalabra(std::string palabra);
};