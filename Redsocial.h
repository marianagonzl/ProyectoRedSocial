#ifndef redsocial_h
#define redsocial_h

#include <iostream>
#include <vector>
#include <string>
#include "Usuario.h"
#include "Publicacion.h"
using namespace std;
class Usuario;
class Publicacion;

class Redsocial{
private: 
vector<Usuario*> usuarios;
vector<Publicacion*> publicaciones;
public:


string nombre;
int numeroDeUsuarios;
int numeroDePublicaciones;
void mostrarUsuarios();

    

void agregarUsuario(){
    Usuario* nuevoUs= new Usuario();
    cout<<"Vas a crear un nuevo usuario"<<endl;
    cout<<"Dame su nombre"<<endl;
    cin>>nuevoUs->nombre;
    cout<<"Dame su edad"<<endl;
    cin>>nuevoUs->edad;
    cout<<"Dame su nacionalidad"<<endl;
    cin>>nuevoUs->nacionalidad;
    usuarios.push_back(nuevoUs);
    numeroDeUsuarios++;
}

    
void Redsocial:: mostrarUsuarios() {
    for(int i=0; i< usuarios.size(); ++i) {
        usuarios[i]->mostrar();
    }
}


void mostrarPublicaciones(){
for(int i = 0; i < publicaciones.size(); i++){
    publicaciones[i]->mostrarPublicacion();
    }
}




Usuario* getUsuario(int id){
    for ( int i = 0; i < usuarios.size(); ++i){
        if(usuarios[i]->getId() == id){
            return usuarios[i];
        }
    }
    
    cout<<"No existe ningun usuario con este Id"<<endl;
    return nullptr;
}

    Redsocial(string nombre){
        this->nombre= nombre;
        this->numeroDeUsuarios = 0;
        this->numeroDePublicaciones = 0;
        
    }


Redsocial(string nombre,vector<Usuario*> usuarios){
       this->nombre= nombre;
       this->usuarios= usuarios;
       this->numeroDeUsuarios = usuarios.size();
       this->numeroDePublicaciones = 0;
    }
    


Redsocial(string nombre,vector<Usuario*> usuarios, vector<Publicacion*> publicaciones){ 
        this->nombre= nombre;
        this->usuarios = usuarios;
        this->publicaciones = publicaciones;
        this->numeroDeUsuarios = usuarios.size();
        this->numeroDePublicaciones = publicaciones.size();
    }





};
#endif

