#include<bits/stdc++.h> // Incluir todas las bibliotecas estándar necesarias

#include<iostream> // Incluir la biblioteca para entrada/salida estándar

#define input freopen("in.txt","r",stdin) // Redirigir la entrada estándar desde un archivo
#define output freopen("out.txt","w",stdout) // Redirigir la salida estándar a un archivo

using namespace std;

int main() {
    input; // Redirigir entrada
    output; // Redirigir salida

    // Solicitar al usuario el número de nodos en el grafo.
    int numNodos;
    cin >> numNodos;

    // Crear una matriz de adyacencia para representar el grafo.
    int grafo[numNodos][numNodos];
    memset(grafo, 0, sizeof(grafo)); // Inicializar la matriz con ceros

    // Solicitar al usuario el número de aristas en el grafo.
    int numAristas;
    cin >> numAristas;

    // Leer las aristas y actualizar la matriz de adyacencia.
    for (int i = 0; i < numAristas; i++) {
        int nodoOrigen, nodoDestino;
        cin >> nodoOrigen >> nodoDestino;
        // Establecer a 1 para indicar una arista dirigida del nodo origen al nodo destino.
        grafo[nodoOrigen][nodoDestino] = 1;
    }

    // Imprimir la matriz de adyacencia para visualizar el grafo.
    for (int i = 0; i < numNodos; i++) {
        for (int j = 0; j < numNodos; j++) {
            cout << "[" << grafo[i][j] << "]"; // Imprimir el valor de cada celda de la matriz
        }
        cout << endl; // Imprimir nueva línea al final de cada fila
    }

    return 0; 
}
