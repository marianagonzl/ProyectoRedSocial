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
void crearPublicacion(string fecha, string contenido);
Usuario* getAmigo(int id);
Usuario(string nombre);
Usuario(string nombre, int edad);
Usuario(string nombre, int edad, string nacionalidad);





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
    for (int i = 0; i < publicaciones.size(); i++) {
        publicaciones[i]->mostrarPublicacion();
    }
}
void Usuario::agregarAmigo(Usuario* nuevoAmigo){
    amigos.push_back(nuevoAmigo);
    nuevoAmigo -> amigos.push_back(this);

}
void Usuario::crearPublicacion(string fecha, string contenido){
    Publicacion* nuevaPublicacion = new Publicacion(this, fecha, contenido);
    publicaciones.push_back(nuevaPublicacion);
}
 Usuario::Usuario* getAmigo(int id){
for(int i = 0; i < amigos.size(); i++) {
    if(amigos[i]->getId() == id) {
        return amigos[i];
    }
}
cout << "No existe amigo con este id" << endl;
return nullptr;

}
};
#endif
