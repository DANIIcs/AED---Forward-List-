#include <iostream>
#include <forward_list>
using namespace std;

// Declaración o definición de la función antes de main
void interseccion(forward_list<int> &l1, forward_list<int> &l2) {
    auto p1 = l1.begin(); // Inicializar el iterador para la primera lista
    auto p2 = l2.begin(); // Inicializar el iterador para la segunda lista

    while (p1 != l1.end() && p2 != l2.end()) {
        if (*p1 == *p2) {
            cout << *p1 << " ";
            ++p1;
            ++p2;
        } else if (*p1 < *p2) {
            ++p1;
        } else {
            ++p2;
        }
    }
}

int main() {
    forward_list<int> l1 = {1, 2, 3, 4, 5};
    forward_list<int> l2 = {3, 4, 5, 6, 7};

    cout << "Lista interseccionada: ";
    interseccion(l1, l2);

    return 0;
}
