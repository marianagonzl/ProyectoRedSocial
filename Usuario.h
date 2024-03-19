#ifndef usuario_h
#define usuario_h

#include <iostream>
#include "Publicacion.h"
#include <vector>
#include <string>
using namespace std;

class Usuario{
private: 
int id;
public:
string nombre;
int edad;
string nacionalidad;
Usuario(string nombre);
Usuario(string nombre, int edad);
Usuario(string nombre, int edad, string nacionalidad);
vector<Usuario*> amigos;
vector<Publicaciones*> publicaciones;
void mostrar();
void mostrarAmigos();
void mostarPublicaciones();
void agregarAmigo(Usuario* nuevoAmigo);
void crearPublicacion();
Usuario* getAmigo(int id);


};
#endif

