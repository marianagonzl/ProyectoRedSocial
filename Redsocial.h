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

    

void agregarUsuario(Usuario* usuario){
    usuarios.push_back(usuario);
    numeroDeUsuarios++;
}

    
void mostarUsuarios() {
    for(size_t i=0; i< usuarios.size(); ++i) {
        usuarios[i]->mostrar();
    }
}


void mostrarPublicaciones(){
for(size_t i = 0; i < publicaciones.size(); ++i){
    publicaciones[i]->mostrarPublicacion();
    }
}




Usuario* getUsuario(int id){
    for (size_t i = 0; i < usuarios.size(); ++i){
        if(usuarios[i]->getId() == id){
            return usuarios[i];
        }
    }
    
    cout<<"No existe ningun usuario con este Id"<<endl;
    return nullptr;
}

    Redsocial(string nombre): nombre(nombre){
        numeroDeUsuarios = 0;
        numeroDePublicaciones = 0;
        
    }


Redsocial(string nombre,vector<Usuario*> usuarios): nombre(nombre), usuarios(usuarios){
        numeroDeUsuarios = usuarios.size();
        numeroDePublicaciones = 0;
    }
    


Redsocial(string nombre,vector<Usuario*> usuarios, vector<Publicacion*> publicaciones):
    nombre(nombre), usuarios(usuarios), publicaciones(publicaciones){
        numeroDeUsuarios = usuarios.size();
        numeroDePublicaciones = publicaciones.size();
    }





};
#endif

