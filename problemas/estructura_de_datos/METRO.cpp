#include<bits/stdc++.h> // Incluir todas las bibliotecas estándar necesarias

using namespace std;

#define input freopen("in.txt","r",stdin) // Redirigir la entrada estándar desde un archivo
#define output freopen("out.txt","w",stdout) // Redirigir la salida estándar a un archivo

int main() {
    int stations, aliceHome; // Declarar variables para el número de estaciones y la estación de Alice
    cin >> stations >> aliceHome; // Leer el número de estaciones y la estación de Alice

    // Declarar vectores para almacenar el estado de las estaciones
    vector<int> stations1(stations); // Estado de las estaciones en el primer camino
    vector<int> stations2(stations); // Estado de las estaciones en el segundo camino

    // Leer el estado de las estaciones en el primer camino
    for (int i = 0; i < stations; i++) {
        cin >> stations1[i];
    }

    // Leer el estado de las estaciones en el segundo camino
    for (int i = 0; i < stations; i++) {
        cin >> stations2[i];
    }

    // Verificar si la estación de inicio de Alice está bloqueada en el primer camino
    if (stations1[0] == 0) {
        cout << "NO" << endl; // Si está bloqueada, imprimir NO y salir del programa
        return 0;
    }

    // Verificar si la estación de llegada de Alice está desbloqueada en el primer camino
    if (stations1[aliceHome - 1] == 1) {
        cout << "YES" << endl; // Si está desbloqueada, imprimir YES y salir del programa
        return 0;
    }

    // Verificar si la estación de llegada de Alice está desbloqueada en el segundo camino
    if (stations2[aliceHome - 1] == 1) {
        cout << "YES" << endl; // Si está desbloqueada, imprimir YES y salir del programa
        return 0;
    }

    // Verificar si tanto la estación de llegada de Alice como la siguiente están bloqueadas en ambos caminos
    if (stations2[aliceHome - 1] == 0 && stations1[aliceHome - 1] == 0) {
        cout << "NO" << endl; // Si ambas están bloqueadas, imprimir NO y salir del programa
        return 0;
    }

    // Verificar si hay una estación desbloqueada en la ruta de Alice después de su estación de salida
    for (int i = aliceHome; i < stations; i++) {
        if (stations1[i] == 1 && stations2[i] == 1) {
            cout << "YES" << endl; // Si hay una estación desbloqueada, imprimir YES y salir del programa
            return 0;
        }
    }

    cout << "NO" << endl; // Si no se cumple ninguna de las condiciones anteriores, imprimir NO

    return 0;
}
