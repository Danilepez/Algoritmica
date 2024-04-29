#include<bits/stdc++.h> // Incluir todas las bibliotecas estándar necesarias

using namespace std;

#define input freopen("in.txt","r",stdin) // Redirigir la entrada estándar desde un archivo
#define output freopen("out.txt","w",stdout) // Redirigir la salida estándar a un archivo

int main() {
    input; // Redirigir entrada
    output; // Redirigir salida

    int numCar; // Declarar una variable para almacenar el número de carros

    // Leer el número de carros y verificar si es distinto de cero
    while (cin >> numCar && numCar) {
        // Crear un vector para almacenar las posiciones de los carros, inicializado en 0
        vector<int> positions(numCar, 0);
        bool noSolution = false; // Bandera para indicar si no hay solución

        // Leer las posiciones finales de los carros
        for (int i = 0; i < numCar; i++) {
            int car, finalPos; // Variables para almacenar el número de carro y su posición final
            cin >> car >> finalPos; // Leer el número de carro y su posición final

            // Verificar si la posición final está fuera de los límites o ya está ocupada
            if (i + finalPos >= numCar || i + finalPos < 0 || positions[i + finalPos] != 0) {
                noSolution = true; // No hay solución
                continue;
            }

            positions[i + finalPos] = car; // Asignar el carro a su posición final
        }

        // Imprimir la solución o -1 si no hay solución
        if (noSolution) {
            cout << -1 << endl;
        } else {
            cout << positions[0]; // Imprimir la posición del primer carro
            for (int i = 1; i < numCar; i++) {
                cout << " " << positions[i]; // Imprimir las posiciones restantes de los carros
            }
            cout << endl; // Imprimir nueva línea al final de la solución
        }
    }

    return 0;
}
