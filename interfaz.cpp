#include <iostream>

using namespace std;

int menuprincipal()
{
    int num;
inicio:
    cout << "Bienvenido a Famous crushes" << endl;
    cout << "Introduce un numero para realizar una de las siguientes acciones: " << endl;
    cout << "1. Ver lista de usuarios" << endl;
    cout << "2. Ver lista de publicaciones" << endl;
    cout << "3. Entrar a un perfil de usuario" << endl;
    cout << "0. Salir" << endl;
    cin >> num;
    system("cls");
    switch (num)
    {
    case 1:
    // muestra listado de todos los usuarios que existen en la red social

        break;
    case 2:
    //muestra listado de todas las publicaciones que existen en la red social

        break;
    case 3:
    //introduce ID del usuario y se muestra el menu de usuario

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



void menuUsUario(int usu)
{
    int num;
inicio:
    cout << "Bienvenido a Famous cruches" << endl;
    cout << "Introduce un numero para realizar una de las siguientes acciones: " << endl;
    cout << "1. Ver lista de amigos" << endl;
    cout << "2. Ver publicaciones" << endl;
    cout << "3. Crear publicacion" << endl;
    cout << "4. Entrar a perfil de amigo" << endl;
    cout << "0. Salir" << endl;
    cin >> num;
    system("cls");
    switch (num)
    {
    case 1:
    // muestra listado de amigos del usuarios 
        break;
    case 2:
    //muestra listado de todas las publicaciones que ha hecho el usuario
        break;
    case 3:
    //crear nueva publicacion
        break;
    case 4:
    //introduce ID de amigo para identificarlo y muestra menu del amigo
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