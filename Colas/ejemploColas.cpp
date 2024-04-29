#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> cola; // Declaración de una cola de enteros

    // Enqueue
    cola.push(1); // Insertar el elemento 1 en la cola
    cola.push(2); // Insertar el elemento 2 en la cola
    cola.push(3); // Insertar el elemento 3 en la cola

    // Dequeue
    while (!cola.empty()) { // Mientras la cola no esté vacía
        cout << cola.front() << " "; // Imprimir el primer elemento en la cola
        cola.pop(); // Eliminar el primer elemento en la cola
    }

    return 0;
}
