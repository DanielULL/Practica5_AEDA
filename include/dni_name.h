#ifndef DNI_NAME_H
#define DNI_NAME_H

#include <string>
#include "cmath"
#include "time.h"

#define DIGITS 3

using namespace std ;



class dni_name
{
private:
    unsigned long dni;
    char letra;
    string nombre;
    string apellido;

public:

    dni_name():
    dni(0),letra('R'),nombre("Daniel"),apellido("Suárez")
    {
        for(unsigned i = 0; i < DIGITS; i++)
        {
            dni+= (rand() % 10) * (pow(10, i ));
        }
    }

    dni_name(unsigned long d,char letra_,string nombre_, string apellido_):
    dni(d),letra(letra_),nombre(nombre_),apellido(apellido_)
    {

    }

    ostream &write(ostream &out) const
    {
        cout.fill  ('0');
        cout.width ( DIGITS );

        out << dni << letra << " " << nombre <<" " << apellido ;
        return out;
    }

    friend ostream& operator<<(ostream& os, const dni_name& dni_name_)
    {
        cout.fill  ('0');
        cout.width ( DIGITS );

        os << dni_name_.dni;

        return os;
    }

    bool operator==(dni_name& other)
    {
        if(other.dni==dni)
            return true;

        else
            return false;
    }

    operator unsigned long()
    {
        return dni;
    }


    bool operator<(dni_name &other)
    {


        if(dni<other.dni)
            return true;
        else
            return false;

    }

    bool operator>(dni_name &other)
    {


        if(dni>other.dni)
            return true;
        else
            return false;

    }

    void operator=(dni_name& other)
    {
        dni=other.dni;
        letra=other.letra;
        nombre=other.nombre;
        apellido=other.apellido;
    }

};
#endif // DNI_NAME_H
