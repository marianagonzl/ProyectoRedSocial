#include "Publicacion.h"

Publicacion::Publicacion(Usuario* usuario, string fecha, string contenido){
    this->usuario = usuario;
    this->fecha = fecha;
    this->contenido = contenido;
}

void Publicacion::mostrarPublicacion(){
    cout<<"Fecha: "<<this->fecha<<endl;
    cout<<"Contenido: "<<this->contenido<<endl;
    cout<<"usuario: "<<this->usuario->nombre<<endl;
}
Publicacion::Publicacion()
{
this->usuario=nullptr;

}
void Giveaway::mostrarGiveA()
{
    cout<<"                  GIVEAWAY"<<endl;
     Publicacion::mostrarPublicacion();
}
;