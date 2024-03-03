// matriz5x5NumerosAlAzar.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*3. Realice un programa que rellene una matriz de 5x5 con números generados al azar
entre 1 y 75). Posteriormente, solicite al usuario el ingreso de un número ente 1 y 5,
debe validarlo (se repite hasta que el usuario ingrese un número válido). Ese número
representa la fila a la que deberá sumarle todos los valores y calcular su promedio.
Muestre al final el resultado de estas operaciones.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    const int tamano = 5;
    int matriz[tamano][tamano];

    // Inicializar la semilla para generar números aleatorios
    srand(time(nullptr));

    // Rellenar la matriz con números aleatorios entre 1 y 75
    for (int i = 0; i < tamano; ++i) {
        for (int j = 0; j < tamano; ++j) {
            matriz[i][j] = rand() % 75 + 1;
        }
    }

    // Mostrar la matriz
    cout << "Matriz generada:" << endl;
    for (int i = 0; i < tamano; ++i) {
        for (int j = 0; j < tamano; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Solicitar al usuario el ingreso de un número entre 1 y 5
    int fila;
    do {
        cout << "\nIngrese el número de la fila a la que desea calcular el promedio (entre 1 y 5): ";
        cin >> fila;
    } while (fila < 1 || fila > 5);

    // Calcular la suma y el promedio de la fila seleccionada
    int suma = 0;
    for (int j = 0; j < tamano; ++j) {
        suma += matriz[fila - 1][j];
    }
    double promedio = static_cast<double>(suma) / tamano;

    // Mostrar el resultado
    cout << "\nLa suma de los números en la fila " << fila << " es: " << suma << endl;
    cout << "El promedio de los números en la fila " << fila << " es: " << promedio << endl;

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
