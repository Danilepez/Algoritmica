#include <iostream>
#include <vector>
#include <queue>

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

    void BFS(int inicio) {
        vector<bool> visitado(V, false); // Vector para marcar los vértices visitados
        queue<int> cola; // Cola para realizar el recorrido en anchura

        cola.push(inicio); // Iniciar con el vértice inicial
        visitado[inicio] = true; // Marcar el vértice inicial como visitado

        while (!cola.empty()) { // Mientras la cola no esté vacía
            int actual = cola.front(); // Obtener el vértice actual de la cola
            cola.pop(); // Sacar el vértice actual de la cola
            cout << actual << " "; // Imprimir el vértice actual

            for (int vecino : adj[actual]) { // Iterar sobre los vecinos del vértice actual
                if (!visitado[vecino]) { // Si el vecino no ha sido visitado
                    cola.push(vecino); // Agregar el vecino a la cola
                    visitado[vecino] = true; // Marcar el vecino como visitado
                }
            }
        }
    }
};

int main() {
    Grafo g(5); // Crear un grafo con 5 vértices

    // Agregar aristas al grafo
    g.agregarArista(0, 1);
    g.agregarArista(0, 4);
    g.agregarArista(1, 2);
    g.agregarArista(1, 3);
    g.agregarArista(1, 4);
    g.agregarArista(2, 3);
    g.agregarArista(3, 4);

    // Realizar un recorrido en anchura desde el vértice 0
    cout << "BFS desde el vértice 0: ";
    g.BFS(0);

    return 0;
}

