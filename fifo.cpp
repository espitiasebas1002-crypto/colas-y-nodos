
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> cola;
    int numero;

    // Ingresar 3 números
    cout << "Ingrese 3 numeros:\n";

    for (int i = 1; i <= 3; i++) {
        cout << "Numero " << i << ": ";
        cin >> numero;

        cola.push(numero);
    }

    cout << "\n--- FUNCIONAMIENTO FIFO ---\n";

    // Mostrar y sacar los números
    while (!cola.empty()) {
        cout << "Sale: " << cola.front() << endl;
        cola.pop();
    }

    return 0;
}
