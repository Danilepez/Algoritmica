// Implementación de DFS (Búsqueda en Profundidad) en un Grafo en C++
#include <iostream>
#include <vector>
#include <stack>

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

    void DFS(int inicio) {
        vector<bool> visitado(V, false);
        stack<int> pila;

        pila.push(inicio);
        visitado[inicio] = true;

        while (!pila.empty()) {
            int actual = pila.top();
            pila.pop();
            cout << actual << " ";

            for (int vecino : adj[actual]) {
                if (!visitado[vecino]) {
                    pila.push(vecino);
                    visitado[vecino] = true;
                }
            }
        }
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

    cout << "DFS desde el vértice 0: ";
    g.DFS(0);

    return 0;
}
