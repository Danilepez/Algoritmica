#include <iostream>
#include <vector>

using namespace std;

class Grafo {
private:
    int V; // Número de vértices
    vector<vector<int>> adj; // Lista de adyacencia

public:
    Grafo(int vertices) : V(vertices) {
        adj.resize(V); // Inicialización del tamaño del vector de listas de adyacencia
    }

    void agregarArista(int u, int v) {
        adj[u].push_back(v); // Agregar v a la lista de adyacencia de u
        adj[v].push_back(u); // Para un grafo no dirigido, agregar u a la lista de adyacencia de v
    }
};

int main() {
    Grafo g(5); // Creación de un objeto Grafo con 5 vértices

    // Agregar aristas al grafo
    g.agregarArista(0, 1);
    g.agregarArista(0, 4);
    g.agregarArista(1, 2);
    g.agregarArista(1, 3);
    g.agregarArista(1, 4);
    g.agregarArista(2, 3);
    g.agregarArista(3, 4);

    return 0;
}

