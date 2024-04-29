#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> pila; // Declaración de una pila de enteros

    // Push
    pila.push(1); // Insertar el elemento 1 en la pila
    pila.push(2); // Insertar el elemento 2 en la pila
    pila.push(3); // Insertar el elemento 3 en la pila

    // Pop
    while (!pila.empty()) { // Mientras la pila no esté vacía
        cout << pila.top() << " "; // Imprimir el elemento en la cima de la pila
        pila.pop(); // Eliminar el elemento en la cima de la pila
    }

    return 0;
}
