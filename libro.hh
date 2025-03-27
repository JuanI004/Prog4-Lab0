#include "publicacion.hh"
#include <set>

class libro : public Publicacion{
    private:
       std::string editorial;
       std::set<std::string> palabrasDes;
   public:
       libro(std::string, std::set<std::string>);
       ~libro();
       std::string getEditorial();
       std::set<std::string> getPDestacadas();
       void setEditorial(std::string editorial);
       void setPDestacadas(std::set<std::string> palabrasDes);
       virtual bool contienePalabra(std::string palabra);
};