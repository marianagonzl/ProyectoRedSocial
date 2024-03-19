#ifndef redsocial_h
#define redsocial_h

#include <iostream>
#include "Usuario.h"
#include "Publicacion.h"
#include <vector>
#include <string>
using namespace std;

class Redsocial{
private: 
vector<Usuario*> usuarios;
vector<Publicacion*> publicaciones;
public:
string nombre;
int numeroDeUsuarios;
int numeroDePublicaciones;
Redsocial(string nombre);
Redsocial(string nombre,vector<Usuario*> usuarios);
Redsocial(string nombre,vector<Usuario*> usuarios, vector<Publicacion*> publicaciones);
void agregarUsuario();
void mostarUsuarios();
Usuario* getUsuario(int id);


};
#endif