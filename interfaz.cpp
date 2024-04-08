#include "Redsocial.h"
#include "Usuario.h"
#include "Publicacion.h"
#include <iostream>
using namespace std;

void menuUsuario(Usuario *usu);
Usuario *usuario;
Usuario *amigo;
Redsocial FamousCrushes("FamousCrushes");
int menuprincipal()
{
    cout << "    ______                                                         __                      " << endl;
    cout << "   / ____/___ _____ ___  ____  __  _______   ____________  _______/ /_  ___  _____         " << endl;
    cout << "  / /_  / __ `/ __ `__ \\/ __ \\/ / / / ___/  / ___/ ___/ / / / ___/ __\\/ _\\/ ___/         " << endl;
    cout << " / __/ / /_/ / / / / / / /_/ / /_/ (__  )  / /__/ /  / /_/ (__  ) / / /  __(__  )          " << endl;
    cout << "/_/    \\__,_/_/ /_/ /_/\\____/\\__,_/___ \\___/_/  \\__,_/____/_/ /_/\\___/____/           " << endl;

    int num;

    cout << "Bienvenido a Famous crushes" << endl;
inicio:
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
        goto inicio;
        break;

    case 2:
        cout << "Listado de todas las publicaciones que existen" << endl;
        FamousCrushes.mostrarPublicaciones();
        goto inicio;
        break;

    case 3:
        int idusu;
        cout << "Escribe tu id para identificación: " << endl;
        cin >> idusu;

        usuario = FamousCrushes.getUsuario(idusu);
        if (usuario != nullptr)
        {
            menuUsuario(usuario);
        }
        // menuUsuario(FamousCrushes.getUsuario(idusu));
        goto inicio;
        break;

    case 4:
        cout << "Agregar un nuevo usuario" << endl;
        FamousCrushes.agregarUsuario();
        goto inicio;
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

void menuUsuario(Usuario *usu)
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
    cout <<" 6. Crear GIVEAWAY"<<endl,
    cout <<" 7. Ver GIVEAWAYS"<<endl;
    cout << "0. Salir" << endl;
    cin >> num;
    system("cls");
    switch (num)
    {
    case 1:
        cout << "Listado de tus amigos" << endl;
        usu->mostrarAmigos();
        goto inicio;
        break;

    case 2:
        cout << "Listado de todas tus publicaciones" << endl;
        usu->mostrarPublicaciones();
        goto inicio;
        break;

    case 3:
        cout << "Crear Publicacion" << endl;
        usu->crearPublicacion();
        goto inicio;
        break;

    case 4:
        int idamige;
        cout << "Escribe el id de tu amigo para identificarlo: " << endl;
        cin >> idamige;
        menuUsuario(FamousCrushes.getUsuario(idamige));
        goto inicio;
        break;

    case 5:
        cout << "Agregar amigo" << endl
             << endl;
        cout << "Listado de todos los usuarios que existen:" << endl;
        FamousCrushes.mostrarUsuarios();
        cout << "Escribe el id del usuario: " << endl;
        cin >> idamige;
        amigo = FamousCrushes.getUsuario(idamige);
        usu->agregarAmigo(amigo);
        goto inicio;
        break;

    case 6:
    usu->crearGiveA();
        goto inicio;
        break;
        case 7:
    usu->mostrarGiveA();
        goto inicio;
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