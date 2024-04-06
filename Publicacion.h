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


};

Publicacion::Publicacion(Usuario* usuario, string fecha, string contenido){
    this->usuario = usuario;
    this->fecha = fecha;
    this->contenido = contenido;
}

void Publicacion::mostrarPublicacion(){
    cout<<"Fecha: "<<this->fecha<<endl;
    cout<<"Contenido: "<<this->contenido<<endl;
    cout<<"usuario: "<<this->usuario->nombre<<endl;
}

#endif
