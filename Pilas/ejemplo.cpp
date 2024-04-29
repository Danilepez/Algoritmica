#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> pila;

    // Push
    pila.push(1);
    pila.push(2);
    pila.push(3);

    // Pop
    while (!pila.empty()) {
        cout << pila.top() << " ";
        pila.pop();
    }

    return 0;
}
