#include<bits/stdc++.h> // Incluir todas las bibliotecas estándar necesarias

using namespace std;

int main() {
    stack<int> pilita; // Declarar una pila de enteros
    cout << pilita.empty() << endl; // Verificar si la pila está vacía (1 si está vacía, 0 si no está vacía)

    pilita.push(10); // Insertar el valor 10 en la pila
    cout << pilita.empty() << endl; // Verificar si la pila está vacía después de insertar un elemento (0)
    cout << pilita.top() << endl; // Obtener el valor del elemento superior de la pila (10)
    cout << pilita.empty() << endl; // Verificar si la pila está vacía después de obtener el elemento superior (0)

    pilita.pop(); // Eliminar el elemento superior de la pila
    //cout << pilita.pop() << endl; // No es válido, pop() no devuelve ningún valor
    cout << pilita.empty() << endl; // Verificar si la pila está vacía después de eliminar un elemento (1)

    return 0;
}
