#include "Redsocial.h"
#include "Usuario.h"
#include <iostream>
using namespace std;
Usuario *usuario;
Usuario *amigo;

void menuUsuario(int usu);

int menuprincipal()
{
    Redsocial FamousCrushes("FamousCrushes");
    int num;
inicio:
    cout << "Bienvenido a Famous crushes" << endl;
    cout << "Introduce un numero para realizar una de las siguientes acciones: " << endl;
    cout << "1. Ver lista de usuarios" << endl;
    cout << "2. Ver lista de publicaciones" << endl;
    cout << "3. Entrar a un perfil de usuario" << endl;
    cout << "4. Agregar un nuevo usuario" << endl;
    cout << "0. Salir" << endl;
    cin >> num;
    system("cls");
    switch (num)
    {
    case 1:
        cout << "Listado de todos los usuarios que existen" << endl;
        FamousCrushes.mostrarUsuarios(); // muestra listado de todos los usuarios que existen en la red social
        break;

    case 2:
        cout << "Listado de todas las publicaciones que existen" << endl;
        FamousCrushes.mostrarPublicaciones(); // muestra listado de todas las publicaciones que existen en la red social
        break;

    case 3:
        int idusu;
        cout << "Escribe tu id para identificación: " << endl;
        cin >> idusu;
        usuario = FamousCrushes.getUsuario(idusu); // introduce ID del usuario y se muestra el menu de usuario
        if (usuario != nullptr)
        {
            cout << "Usuario encontrado" << endl;
            menuUsuario(usuario->getId());
        }
        else
        {
            cout << "Usuario no encontrado" << endl;
            break;

        case 4:
            cout << "Agregar un nuevo usuario" << endl;
            FamousCrushes.agregarUsuario();
            break;

        case 0:
            goto fin;
            break;

        default:
            cout << "Ingresa una de las opciones validas" << endl;
            goto inicio;
        }
    fin:
        return 0;
    }
}
    void menuUsUario(int usu)
    {
        int num;
    inicio:
        cout << "Bienvenido a Famous crushes" << endl;
        cout << "Introduce un numero para realizar una de las siguientes acciones: " << endl;
        cout << "1. Ver lista de amigos" << endl;
        cout << "2. Ver publicaciones" << endl;
        cout << "3. Crear publicacion" << endl;
        cout << "4. Entrar a perfil de amigo" << endl;
        cout << "5. Agregar un nuevo amigo" << endl;
        cout << "0. Salir" << endl;
        cin >> num;
        system("cls");
        switch (num)
        {
        case 1:
            cout << "Listado de tus amigos" << endl;
            usuario->mostrarAmigos(); // muestra listado de amigos del usuarios
            break;

        case 2:
            cout << "Listado de todas tus publicaciones" << endl;
            usuario->mostrarPublicaciones(); // muestra listado de todas las publicaciones que ha hecho el usuario
            break;

        case 3:
            cout << "Crear Publicacion" << endl;
            usuario->crearPublicacion(); // crear nueva publicacion
            break;

        case 4: // introduce ID de amigo para identificarlo y muestra menu del amigo
            int idamigo;
            cout << "Escribe el id de tu amigo para identifiarlo: " << endl;
            cin >> idamigo;
            FamousCrushes.getUsuario(idamigo);
            if (usuario != nullptr){ 
            {
                cout << "Menu de tu amigo" << endl;
                amigo->mostrar();
            }
            else
            {

            cout << "Amigo no encontrado" << endl;
            
            break};
            
            

        case 5:
            cout << "Agregar amigo" << endl;
            usuario->agregarAmigo(amigo); // se introduce id y se hacen amigos
            break;

        case 0:
            menuprincipal();
            break;

        default:
            cout << "Ingresa una de las opciones validas" << endl;
            goto inicio;
        }
    }

    int main()
    {
        menuprincipal();
        return 0;
    }