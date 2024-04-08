#include "Redsocial.h"
#include "Usuario.h"
#include <iostream>
using namespace std;

void menuUsuario(int usu);
Usuario *usuario;
Usuario *amigo;
Redsocial FamousCrushes("FamousCrushes");
int menuprincipal()
{
    
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
        FamousCrushes.mostrarUsuarios(); 
        break;

    case 2:
        cout << "Listado de todas las publicaciones que existen" << endl;
        FamousCrushes.mostrarPublicaciones(); 
        break;

    case 3:
        int idusu;
        cout << "Escribe tu id para identificación: " << endl;
        cin >> idusu;
        usuario = FamousCrushes.getUsuario(idusu); 
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
        usuario->mostrarAmigos(); 
        break;

    case 2:
        cout << "Listado de todas tus publicaciones" << endl;
        usuario->mostrarPublicaciones();
        break;

    case 3:
        cout << "Crear Publicacion" << endl;

        usuario->crearPublicacion(); 
        break;

    case 4: 
        int idamige;
        cout << "Escribe el id de tu amigo para identifiarlo: " << endl;
        cin >> idamige;
        amigo = FamousCrushes.getUsuario(idamige);
        if (usuario != nullptr)
        {
            cout << "Menu de tu amigo" << endl;
            amigo->mostrar();
        }
        else
        {
            cout << "Amigo no encontrado" << endl;
        }
        break;
    case 5:
        cout << "Agregar amigo" << endl << endl;
        cout << "Listado de todos los usuarios que existen:" << endl;
        FamousCrushes.mostrarUsuarios();

        cout << "Escribe el id del usuario: " << endl;
        cin >> idamige;
        amigo = FamousCrushes.getUsuario(idamige);
        if (usuario != nullptr)
        {
            cout << "Nuevo amigo kawaii agregado" << endl;
            usuario->agregarAmigo(amigo);
        }
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