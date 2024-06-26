#include "Usuario.h"
#include "Publicacion.h"


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
    cout << "Amigo de " <<this->nombre << " : " <<endl;
    for(int i = 0; i < this->amigos.size(); i++) {
        amigos[i]->mostrar();
    }
}

void Usuario::mostrarPublicaciones(){
    cout << "publicacion " << this->nombre << " : " << endl;
    for (int i = 0; i < this->publicaciones.size(); i++) {
        publicaciones[i]->mostrarPublicacion();
    }
}
void Usuario::mostrarGiveA(){
    cout << "publicacion " << this->nombre << " : " << endl;
    for (int i = 0; i < this->ga.size(); i++) {
        this->ga[i]->mostrarGiveA();
    }
}
void Usuario::agregarAmigo(Usuario* nuevoAmigo){
    amigos.push_back(nuevoAmigo);
    nuevoAmigo -> amigos.push_back(this);
    cout<<"Ya tienes un nuevo amigue kawaii"<<endl<<endl;
}
Publicacion* Usuario::crearPublicacion(){
    Publicacion* nuevaPublicacion = new Publicacion();
    cout<<"Estas creando una nueva,te voy a pedir una serie de datos"<<endl;
    nuevaPublicacion->usuario=this;
    cout<<"Escribe la fecha para la publicacion"<<endl;
    cin>>nuevaPublicacion->fecha;
    cout<<"Escribe el contenido de tu publicacion, sin espacios"<<endl;
    cin>>nuevaPublicacion->contenido;
    this->publicaciones.push_back(nuevaPublicacion);
    return this->publicaciones.back();
}
 Usuario* Usuario::getAmigo(int id){
for(int i = 0; i < this->amigos.size(); i++) {
    if(amigos[i]->getId() == id) {
        return this->amigos[i];
    }
}
cout << "No existe amigue con este id" << endl;
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

void Usuario::crearGiveA()
{
Giveaway* G = new Giveaway();
    cout<<"Estas creando una nueva publicacion Giveaway, te voy a pedir una serie de datos"<<endl;
    G->usuario=this;
    cout<<"Escribe la fecha del Giveaway"<<endl;
    cin>>G->fecha;
    cout<<"Escribe el contenido de tu publicacion, sin espacios"<<endl;
    cin>>G->contenido;
    ga.push_back(G);
}

