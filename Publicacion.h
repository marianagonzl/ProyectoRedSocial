#ifndef publicacion_h
#define publicacion_h

#include <iostream>
#include "Usuario.h"
#include <vector>
#include <string>
using namespace std;
class Usuario;

class Publicacion{
private: 
int id;


public: 
string fecha;
string contenido;
Usuario* usuario;
void mostrarPublicacion();
Publicacion(Usuario* usuario, string fecha, string contenido);
Publicacion();

};

class Giveaway: public Publicacion{
public:
void mostrarGiveA();
};


#endif
