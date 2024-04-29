#include<bits/stdc++.h> // Incluir todas las bibliotecas estándar necesarias

using namespace std;

#define input freopen("in.txt","r",stdin) // Redirigir la entrada estándar desde un archivo
#define output freopen("out.txt","w",stdout) // Redirigir la salida estándar a un archivo

int main() {
    // input; // Redirigir entrada (comentado para desactivar la redirección)
    output; // Redirigir salida

    list<int> listita; // Declarar una lista enlazada de enteros
    listita.push_back(1); // Insertar 1 al final de la lista
    listita.push_back(2); // Insertar 2 al final de la lista
    listita.push_back(3); // Insertar 3 al final de la lista
    list<int>::iterator it; // Declarar un iterador para recorrer la lista

    it = listita.end(); // Establecer el iterador al final de la lista
    cout << *it << endl; // Imprimir el valor del último elemento de la lista (que es un valor indeterminado)

    // Iterar sobre la lista e imprimir cada elemento
    for (it = listita.begin(); it != listita.end(); it++) {
        cout << *it << endl; // Imprimir el valor del elemento actual apuntado por el iterador
    }

    return 0;
}
