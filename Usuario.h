#ifndef usuario_h
#define usuario_h

#include <iostream>
#include <vector>
#include <string>
#include "Publicacion.h"
using namespace std;

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
void mostarPublicaciones();
void agregarAmigo(Usuario* nuevoAmigo);
void crearPublicacion(string& fecha, string& contenido);
Usuario* getAmigo(int id);
Usuario(int id, string& nombre):
     id(id), nombre(nombre) {};
Usuario(int id,string& nombre, int edad):
    id(id), nombre(nombre), edad(edad) {};
Usuario(string nombre, int edad, string nacionalidad):
 id(id), nombre(nombre), edad(edad), nacionalidad(nacionalidad){};





int Usuario::getId(){
    return id;
}

void Usuario::mostrar(){
cout<< "ID: "<<id<<endl;
cout<< "Nombre: "<<nombre<<endl;
cout<< "Edad: "<<edad<<endl;
cout<< "Nacionalidad: "<<nacionalidad<<endl;
}

void Usuario::mostrarAmigos(){
    cout << "Amigo de " << nombre << " : " <<endl;
    for(size_t i = 0; i < amigos.size(); ++i) {
        amigos[i]->mostrar();
    }
}

void Usuario::mostrarPublicaciones(){
    cout << "publicacion " << nombre << " : " << endl;
    for (size_t i = 0; i < publicaciones.size(); ++i) {
        publicaciones[i]->mostrarPublicacion();
    }
}
void Usuario::agregarAmigo(Usuario* nuevoAmigo){
    amigos.push_back(nuevoAmigo);
    nuevoAmigo -> amigos.push_back(this);

}
void Usuario::crearPublicacion(string& fecha, string& contenido){
    Publicacion* nuevaPublicacion = new Publicacion(this, fecha, contenido);
    publicaciones.push_back(nuevaPublicacion);
}
 Usuario::Usuario* getAmigo(int id){
for(size_t i = 0; i < amigos.size(); ++i) {
    if(amigos[i]->getId() == id) {
        return amigos[i];
    }
}
cout << "No existe amigo con este id" << endl;
return nullptr;

}
};
#endif
