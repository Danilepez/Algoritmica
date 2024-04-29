#include <iostream>
#include <vector>

using namespace std;

class Grafo {
private:
    int V; // Número de vértices
    vector<vector<int>> adj; // Lista de adyacencia

public:
    Grafo(int vertices) : V(vertices) {
        adj.resize(V);
    }

    void agregarArista(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); // Para un grafo no dirigido
    }
};

int main() {
    Grafo g(5);

    g.agregarArista(0, 1);
    g.agregarArista(0, 4);
    g.agregarArista(1, 2);
    g.agregarArista(1, 3);
    g.agregarArista(1, 4);
    g.agregarArista(2, 3);
    g.agregarArista(3, 4);

    return 0;
}
