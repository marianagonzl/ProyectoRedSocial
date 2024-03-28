#ifndef redsocial_h
#define redsocial_h

#include <iostream>
#include <vector>
#include <string>
#include "Usuario.h"
#include "Publicacion.h"
using namespace std;

class Redsocial{
private: 
vector<Usuario*> usuarios;
vector<Publicacion*> publicaciones;
public:


string nombre;
int numeroDeUsuarios;
int numeroDePublicaciones;
//Métodos
//Método para agregar usuarios a la rede social

void agregarUsuario(Usuario* usuario){
    usuarios.push_back(usuario);
    numeroDeUsuarios++;
}
//Método para mostrarUsuarios
void mostarUsuarios() {
    for(auto usuario : usuarios) {
    usuario -> mostrar(); 
    }
}
//Método para mostrar publicaciones

void mostrarPublicaciones(){
for(auto publicacion : publicaciones){
    publicacion->mostrarPublicacion();
    }
}

//Método para obtener un usuario por ID

Usuario* getUsuario(int id){
    for (auto usuario: usuarios){
        if(usuario -> getId() == id){
            return usuario;
        }
    }
    return nullptr; //si no se encuentra
}

Redsocial(string& nombre):
    nombre(nombre), numeroDeUsuarios(0), numeroDePublicaciones(0){
       
             
    }
//Crea red social con nom,bre y una lista precargada de usuario

Redsocial(string& nombre,vector<Usuario*>& usuarios):
    nombre(nombre), usuarios(usuarios), numeroDeUsuarios(usuarios.size()), numeroDePublicaciones(){}

//Crea red social con nom,bre con una lista precargada de usuario y  publicaciones
Redsocial(string& nombre,vector<Usuario*>& usuarios, vector<Publicacion*>& publicaciones):
nombre(nombre), usuarios(usuarios), publicaciones(publicaciones),numeroDeUsuarios(usuarios.size()), numeroDePublicaciones(publicaciones.size()){}





};
#endif //redsocial_h

