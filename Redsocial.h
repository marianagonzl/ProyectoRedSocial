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
vector<Giveaway*>ga;
public:


string nombre;
int numeroDeUsuarios;
int numeroDePublicaciones;

    
Redsocial(string nombre);
Redsocial(string nombre,vector<Usuario*> usuarios);
Redsocial(string nombre,vector<Usuario*> usuarios, vector<Publicacion*> publicaciones);
Usuario* getUsuario(int id);
void mostrarPublicaciones();
void mostrarUsuarios() ;
void agregarUsuario();
void mostrarGiveaway();
void agregarPublicaciones(Publicacion* x);
};
#endif

