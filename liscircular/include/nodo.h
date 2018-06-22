#ifndef NODO_H
#define NODO_H
#include <string>
#include <iostream>



template <class T>
class Nodo{
    T dato;

public:
    Nodo *siguiente;
    Nodo(T);
    T getDato();
    void setDato(T);
    void print();
};

#endif // NODO_H
