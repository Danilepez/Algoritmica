#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

bool vis[10000]; // Arreglo para marcar nodos visitados
vector<int> grafo[10000]; // Lista de adyacencia para representar el grafo
int niveles[10000]; // Almacena los niveles de cada nodo respecto al nodo inicial

// Función de búsqueda en amplitud (BFS)
void bfs(int nodoInicial) {
    queue<int> colita;
    colita.push(nodoInicial);
    niveles[nodoInicial] = 0;
    while (!colita.empty()) {
        int nodoActual = colita.front();
        colita.pop();
        if (!vis[nodoActual]) {
            vis[nodoActual] = true; // Marcar el nodo como visitado
            // Explorar los nodos vecinos
            for (int i = 0; i < grafo[nodoActual].size(); i++) {
                int amigo = grafo[nodoActual][i]; // Vecino o amigo
                niveles[amigo] = niveles[nodoActual] + 1; // Actualizar el nivel del vecino
                if (!vis[amigo]) { // Si el vecino no ha sido visitado, agregarlo a la cola
                    colita.push(amigo);
                } 
            }   
        }
    }
}

int main() {
    input;
    int nodos, aristas;
    cin >> nodos >> aristas; // Leer el número de nodos y aristas
    // Construir el grafo
    for (int i = 0; i < aristas; i++) {
        int nodoInicial, nodoFinal;
        cin >> nodoInicial >> nodoFinal;
        grafo[nodoInicial].push_back(nodoFinal); // Agregar arista al grafo
    }
    // Determinar si el nodo S puede llegar al nodo T
    int S, T;
    cin >> S >> T;
    bfs(S); // Realizar búsqueda en amplitud desde el nodo S
    if (vis[T]) { // Si el nodo T fue visitado, significa que se puede alcanzar desde el nodo S
        cout << "Si lo podria conocer" << endl;
    } else {
        cout << "No lo podria conocer" << endl;
    }
}
