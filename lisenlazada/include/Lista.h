#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "nodo.h"
#include <string>
#include <iostream>


template <class T>
class ListaEnlazada{
    Nodo<T> *cabeza;

public:
    ListaEnlazada();
    ~ListaEnlazada();
    void agregarNodo(T);
    void eliminarNodo(T);
    void recorrerLista();

};


#endif // LISTA_H_INCLUDED
