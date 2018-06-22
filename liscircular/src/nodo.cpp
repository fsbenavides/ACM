#include "nodo.h"
#include <string>
#include <iostream>

using namespace std;


template<class T>
Nodo<T>::Nodo(T d){
    dato=d;
    siguiente=NULL;
}

template<class T>
T Nodo<T>::getDato(){
    return dato;
}

template<class T>
void Nodo<T>::setDato(T nuevoDato){
    dato=nuevoDato;
}

template<class T>
void Nodo<T>::print()
{
    cout<<dato<<" "<<this<<" "<<"siguiente "<<siguiente<<" ";
}
