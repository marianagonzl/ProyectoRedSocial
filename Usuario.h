#ifndef usuario_h
#define usuario_h

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include "Publicacion.h"
using namespace std;
class Publicacion;

class Usuario{
private:
int id;

public:
string nombre;
int edad;
string nacionalidad;
vector<Usuario*> amigos;
vector<Publicacion*> publicaciones;


int getId();
void mostrar();
void mostrarAmigos();
void mostrarPublicaciones();
void agregarAmigo(Usuario* nuevoAmigo);
void crearPublicacion();
Usuario* getAmigo(int id);
Usuario();
Usuario(string nombre);
Usuario(string nombre, int edad);
Usuario(string nombre, int edad, string nacionalidad);



};

int Usuario::getId(){
    return this->id;
}

void Usuario::mostrar(){
cout<< "ID: "<<this->id<<endl;
cout<< "Nombre: "<<this->nombre<<endl;
cout<< "Edad: "<<this->edad<<endl;
cout<< "Nacionalidad: "<<this->nacionalidad<<endl;
}

void Usuario::mostrarAmigos(){
    cout << "Amigo de " << nombre << " : " <<endl;
    for(int i = 0; i < amigos.size(); i++) {
        amigos[i]->mostrar();
    }
}

void Usuario::mostrarPublicaciones(){
    cout << "publicacion " << nombre << " : " << endl;
    for (int i = 0; i < this->publicaciones.size(); i++) {
        publicaciones[i]->mostrarPublicacion();
    }
}
void Usuario::agregarAmigo(Usuario* nuevoAmigo){
    amigos.push_back(nuevoAmigo);
    nuevoAmigo -> amigos.push_back(this);

}
void Usuario::crearPublicacion(){
    Publicacion* nuevaPublicacion = new Publicacion();
    cout<<"Estas creando una nueva,te voy a pedir una serie de datos"<<endl;
    nuevaPublicacion->usuario=this;
    cout<<"Dame la fecha de hoy"<<endl;
    cin>>nuevaPublicacion->fecha;
    cout<<"Dame el contenido de tu publicacion"<<endl;
    cin>>nuevaPublicacion->contenido;
    publicaciones.push_back(nuevaPublicacion);
}
 Usuario* Usuario::getAmigo(int id){
for(int i = 0; i < amigos.size(); i++) {
    if(amigos[i]->getId() == id) {
        return amigos[i];
    }
}
cout << "No existe amigo con este id" << endl;
return nullptr;

}
Usuario::Usuario(string nombre){
    this->id = rand() % 1000; 
    this->nombre = nombre;
    this->edad = 0;
    this->nacionalidad = "no definida";
}

Usuario::Usuario(string nombre, int edad){
    this->id = rand() % 1000; 
    this->nombre = nombre;
    this->edad = edad;
    this->nacionalidad = "no definida";
}
Usuario::Usuario(string nombre, int edad, string nacionalidad){
    this->id = rand() % 1000; 
    this->nombre = nombre;
    this->edad = edad;
    this->nacionalidad = nacionalidad;
}
Usuario::Usuario ()
{
this->id = rand() % 1000; 
}

#endif
