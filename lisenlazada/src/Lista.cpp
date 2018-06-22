#include "Lista.h"
#include "nodo.cpp"
#include <string>
#include <iostream>

using namespace std;

template<class T>
ListaEnlazada<T>::ListaEnlazada(){
    cabeza=NULL;
}


template<class T>
ListaEnlazada<T>::~ListaEnlazada(){
    Nodo<T>* actual=NULL;
    while(cabeza){
        actual=cabeza;
        cabeza=cabeza->siguiente;
        delete actual;
    }
}


template <class T>
void ListaEnlazada<T>::agregarNodo(T elem){
    Nodo<T>* actual=cabeza;
    Nodo<T>* previo=NULL;
    if(!cabeza){
        cabeza=new Nodo<T>(elem);
        cabeza->siguiente=actual;
    }
    else{
        while(actual->siguiente&&elem>actual->getDato()){
            previo=actual;
            actual=actual->siguiente;
        }
        if(elem>actual->getDato()){
            Nodo<T> *nuevo= new Nodo<T>(elem);
            nuevo->siguiente=actual->siguiente;
            actual->siguiente=nuevo;
        }
        if(elem<actual->getDato()){
            Nodo<T> *nuevo= new Nodo<T>(elem);
            nuevo->siguiente=actual;
            if(previo)
                previo->siguiente=nuevo;
            else
                cabeza=nuevo;
        }
    }
}


template <class T>
void ListaEnlazada<T>::eliminarNodo(T elem){
    Nodo<T>* actual=cabeza;
    Nodo<T>* previo=NULL;
    if(cabeza){
        while(actual&&actual->getDato()<=elem){
            if(actual->getDato()==elem){
                if(previo)
                    previo->siguiente=actual->siguiente;
                else
                    cabeza=actual->siguiente;
                delete actual;
            }
            previo=actual;
            actual=actual->siguiente;
        }
    }
}


template<class T>
void ListaEnlazada<T>::recorrerLista(){
    Nodo<T>* actual=cabeza;
    cout<<"[";
    while(actual){
        actual->print();
        actual=actual->siguiente;
    }
    cout<<"]"<<endl;
}
