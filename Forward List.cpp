#include <iostream>
#include <forward_list>
using namespace std;

// Retorna el elemento al comienzo
T front();      

// Retorna el elemento al final
T back();       

// Agrega un elemento al comienzo
void push_front(T);  

// Agrega un elemento al final
void push_back(T);  

// Remueve el elemento al comienzo
T pop_front();       

// Remueve el elemento al final
T pop_back();

// Retorna el elemento en la posición indicada
T operator[](int);

// Retorna si la lista está vacía o no
bool empty();

// Retorna el tamaño de la lista
int size();

// Elimina todos los elementos de la lista
void clear() {      
    while (head != nullptr) {
        Nodo* temp = head;
        head = head->next;
        delete temp;
    }
    head = nullptr;
}

// Implementa un algoritmo de ordenación con listas enlazadas
void sort(); {

}

// Revierte la lista
void reverse();      




int main() {
    return 0;
}
