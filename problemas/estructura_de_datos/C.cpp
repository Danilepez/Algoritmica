#include<bits/stdc++.h> // Incluir todas las bibliotecas estándar necesarias

using namespace std;

#define input freopen("in.txt","r",stdin) // Redirigir la entrada estándar desde un archivo
#define output freopen("out.txt","w",stdout) // Redirigir la salida estándar a un archivo

int main() {
    input; // Redirigir entrada
    output; // Redirigir salida

    int s, b; // Declarar variables para el número de soldados y de consultas

    // Leer el número de soldados y de consultas, verificando que ambos sean diferentes de cero
    while (cin >> s >> b && s && b) {
        vector<int> soldiers(s); // Declarar un vector para almacenar el índice de cada soldado

        // Inicializar el vector soldiers con los índices de los soldados
        for (int i = 0, j = 1; i < s; i++, j++) {
            soldiers[i] = j;
        }

        int leftOld = s; // Inicializar la posición izquierda más antigua
        int rightOld = 0; // Inicializar la posición derecha más antigua

        // Leer las consultas
        for (int i = 0; i < b; i++) {
            int l, r; // Declarar variables para las posiciones izquierda y derecha de la consulta
            cin >> l >> r; // Leer las posiciones izquierda y derecha

            // Ajustar las posiciones izquierda y derecha según las posiciones antiguas
            if (leftOld <= l) {
                l = leftOld;
            }

            if (rightOld > r) {
                r = rightOld;
            }

            // Marcar a los soldados en las posiciones dadas como fuera de servicio
            soldiers[l - 1] = -1;
            soldiers[r - 1] = -1;

            // Imprimir los índices del soldado a la izquierda y a la derecha del intervalo actual
            if (soldiers[0] == -1) {
                cout << "* ";
            } else {
                cout << to_string(soldiers[l - 2]) << " ";
            }

            if (soldiers[s - 1] == -1) {
                cout << "*" << endl;
            } else {
                cout << to_string(soldiers[r]) << endl;
            }

            leftOld = l; // Actualizar la posición izquierda más antigua
            rightOld = r; // Actualizar la posición derecha más antigua
        }
        cout << "-" << endl; // Imprimir línea divisoria entre consultas
    }
    return 0;
}
