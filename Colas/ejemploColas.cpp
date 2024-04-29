#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> cola;

    // Enqueue
    cola.push(1);
    cola.push(2);
    cola.push(3);

    // Dequeue
    while (!cola.empty()) {
        cout << cola.front() << " ";
        cola.pop();
    }

    return 0;
}
