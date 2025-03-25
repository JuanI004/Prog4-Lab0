#include <iostream>
#include <string>

class DTFecha{
    private:
        int dia;
        int mes;
        int anio;
    public:
        DTFecha();
        DTFecha(int dia, int mes, int anio);
        ~DTFecha();
        int getDia();
        int getMes();
        int getAnio();
        friend std::ostream& operator<<(std::ostream& os,DTFecha& f);
        DTFecha& operator=(DTFecha& f);
};

