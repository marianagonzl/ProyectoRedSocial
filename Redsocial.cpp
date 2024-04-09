#include "Redsocial.h"
#include "Usuario.h"
#include "Publicacion.h"
#include <string>
#include <vector>
using namespace std;

void Redsocial::agregarUsuario()
{
    Usuario *nuevoUs = new Usuario();
    cout << "Vas a crear un nuevo usuario" << endl;
    cout << "Dame tu nombre" << endl;
    cin >> nuevoUs->nombre;
    cout << "Dame tu edad" << endl;
    cin >> nuevoUs->edad;
    cout << "Dame tu nacionalidad" << endl;
    cin >> nuevoUs->nacionalidad;
    usuarios.push_back(nuevoUs);
    numeroDeUsuarios++;
    cout<<"Creaste un nuevo usuario amigue UwU"<<endl<<endl;
}

void Redsocial::mostrarUsuarios()
{
    for (int i = 0; i < usuarios.size(); ++i)
    {
        usuarios[i]->mostrar();
        cout<<endl;
    }
}

void Redsocial::mostrarPublicaciones()
{
    for (int i = 0; i < this->publicaciones.size(); i++)
    {
        this->publicaciones[i]->mostrarPublicacion();
        cout<<endl;
    }
}

Usuario *Redsocial::getUsuario(int id)
{
    for (int i = 0; i < usuarios.size(); ++i)
    {
        if (usuarios[i]->getId() == id)
        {
            return usuarios[i];
        }
    }

    cout << "No existe ningun usuario con este Id" << endl;
    cout<<endl;
    return nullptr;
}

Redsocial::Redsocial(string nombre)
{
    this->nombre = nombre;
    this->numeroDeUsuarios = 0;
    this->numeroDePublicaciones = 0;
}

Redsocial::Redsocial(string nombre, vector<Usuario *> usuarios)
{
    this->nombre = nombre;
    this->usuarios = usuarios;
    this->numeroDeUsuarios = usuarios.size();
    this->numeroDePublicaciones = 0;
}

Redsocial::Redsocial(string nombre, vector<Usuario *> usuarios, vector<Publicacion *> publicaciones)
{
    this->nombre = nombre;
    this->usuarios = usuarios;
    this->publicaciones = publicaciones;
    this->numeroDeUsuarios = usuarios.size();
    this->numeroDePublicaciones = publicaciones.size();
}

void Redsocial::mostrarGiveaway()
{
    for (int i = 0; i < this->ga.size(); i++)
    {
        this->ga[i]->mostrarGiveA();
    }
}

void Redsocial::agregarPublicaciones(Publicacion* x){
this->publicaciones.push_back(x);

}