#ifndef ISBN_H
#define ISBN_H
#include <iostream>

using namespace std;

class ISBN
{

public:
    ISBN(string cadena);
    void verificar();


protected:
    string s;
    string prefijo;
    string pais;
    string editorial;
    string secuencia;
    string digitoV;
    string nuevo = "";
};

#endif // ISBN_H
