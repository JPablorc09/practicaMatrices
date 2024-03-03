// 4x4llenadoAutomaticoNumeros.cpp : This file contains the 'main' function. Program execution begins and ends there.

/* 1.Diseñar un programa con una matriz de 4x4 que se debe llenar en forma automática
con 1 y 0. Sólo en la diagonal principal debe colocar el 1, en las restantes posiciones
debe colocar el 0 (cero). Al final debe mostrar en pantalla la matriz completa.
*/

#include <iostream>
using namespace std;
int main()
{
        const int tamano = 4;
        int matriz[tamano][tamano];

        // Llenar la matriz con 0
        for (int i = 0; i < tamano; ++i) {
            for (int j = 0; j < tamano; ++j) {
                matriz[i][j] = 0;
            }
        }

        // Colocar 1 en la diagonal principal
        for (int i = 0; i < tamano; ++i) {
            matriz[i][i] = 1;
        }

        // Mostrar la matriz completa
        cout << "Matriz completa:" << endl;
        for (int i = 0; i < tamano; ++i) {
            for (int j = 0; j < tamano; ++j) {
                cout << matriz[i][j] << " ";
            }
            cout << endl;
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
