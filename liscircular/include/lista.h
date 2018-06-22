#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "nodo.h"


template <class T>
class ListaCircular{
    Nodo<T> *cabeza;
public:
    ListaCircular();
    ~ListaCircular();
    void agregarNodo(T);
    void eliminarNodo(T);
    void recorrerLista();
    int getTamanyo();
};
#endif // LISTA_H_INCLUDED
