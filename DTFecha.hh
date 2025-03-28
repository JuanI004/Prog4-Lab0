#ifndef DTFECHA_HH
#define DTFECHA_HH

#include <iostream>
#include <string>

class DTFecha{
    private:
        int dia;
        int mes;
        int anio;
    public:
        DTFecha();
        DTFecha(int, int, int);
        ~DTFecha();
        int getDia() const;
        int getMes() const;
        int getAnio() const;
        friend std::ostream& operator<<(std::ostream& os,const DTFecha& f);
        DTFecha& operator=(const DTFecha& f);
        bool operator>=(const DTFecha& f) const;
};

#endif
