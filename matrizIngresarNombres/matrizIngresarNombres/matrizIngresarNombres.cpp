// matrizIngresarNombres.cpp : This file contains the 'main' function. Program execution begins and ends there.

/* 2. Haga un programa que solicite al usuario el ingreso de 15 nombres de personas.
Posteriormente debe solicitarle el ingreso de un nombre a buscar dentro de la matriz.
Si lo encuentra, debe indicar cuantas veces estaba. Si no lo encuentra, debe indicar
que no lo halló.
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    const int cantidadNombres = 15;
    string nombres[cantidadNombres];

    // Solicitar al usuario el ingreso de 15 nombres de personas
    cout << "Ingrese 15 nombres de personas:" << endl;
    for (int i = 0; i < cantidadNombres; ++i) {
        cout << "Nombre " << i + 1 << ": ";
        getline(cin, nombres[i]);
    }

    // Solicitar al usuario el nombre a buscar
    string nombreABuscar;
    cout << "\nIngrese el nombre a buscar: ";
    getline(cin, nombreABuscar);

    // Buscar el nombre en la matriz
    int contador = count(begin(nombres), end(nombres), nombreABuscar);

    // Mostrar el resultado
    if (contador > 0) {
        cout << "El nombre '" << nombreABuscar << "' se encontró " << contador << " veces en la matriz." << endl;
    }
    else {
        cout << "El nombre '" << nombreABuscar << "' no se encontró en la matriz." << endl;
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
