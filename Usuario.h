#ifndef usuario_h
#define usuario_h

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

class Publicacion;
class Giveaway;
class Usuario{
private:
int id;

public:
string nombre;
int edad;
string nacionalidad;
vector<Usuario*> amigos;
vector<Publicacion*> publicaciones;
vector<Giveaway*> ga;


int getId();
void mostrar();
void mostrarAmigos();
void mostrarPublicaciones();
void agregarAmigo(Usuario* nuevoAmigo);
void crearPublicacion();
void crearGiveA();
Usuario* getAmigo(int id);
Usuario();
Usuario(string nombre);
Usuario(string nombre, int edad);
Usuario(string nombre, int edad, string nacionalidad);



};



#endif
