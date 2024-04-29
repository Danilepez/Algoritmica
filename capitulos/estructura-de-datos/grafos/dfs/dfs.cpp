#include<bits/stdc++.h> // Incluir todas las bibliotecas estándar necesarias

using namespace std;

#define input freopen("in.txt","r",stdin) // Redirigir la entrada estándar desde un archivo
#define output freopen("out.txt","w",stdout) // Redirigir la salida estándar a un archivo

bool vis[10000]; // Arreglo para marcar nodos visitados
vector<int> grafo[10000]; // Lista de adyacencia para representar el grafo

// Función de búsqueda en profundidad (DFS)
void dfs(int nodoInicial) {
    stack<int> pilita;
    pilita.push(nodoInicial);
    while (!pilita.empty()) { // Mientras la pila no esté vacía
        int nodoActual = pilita.top(); // Obtener el nodo actual de la cima de la pila
        pilita.pop(); // Eliminar el nodo actual de la pila
        if (!vis[nodoActual]) { // Si el nodo no ha sido visitado
            vis[nodoActual] = true; // Marcar el nodo como visitado
            // Explorar los nodos vecinos
            for (int i = 0; i < grafo[nodoActual].size(); i++) {
                int amigo = grafo[nodoActual][i]; // Vecino o amigo
                if (!vis[amigo]) { // Si el vecino no ha sido visitado, agregarlo a la pila
                    pilita.push(amigo);
                } 
            }   
        }
    }
}

int main() {
    input; // Redirigir entrada
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
    dfs(S); // Realizar búsqueda en profundidad desde el nodo S
    if (vis[T]) { // Si el nodo T fue visitado, significa que se puede alcanzar desde el nodo S
        cout << "Si lo podria conocer" << endl;
    } else {
        cout << "No lo podria conocer" << endl;
    }
}
