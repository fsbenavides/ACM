#include "lista.h"
#include "nodo.cpp"
#include <string>
#include <iostream>

using namespace std;

template<class T>
ListaCircular<T>::ListaCircular(){
    cabeza=NULL;
}
template <class T>
void ListaCircular<T>::agregarNodo(T elem){
    Nodo<T>* actual=cabeza;
    Nodo<T>* previo=NULL;
    if(!cabeza){
        cabeza=new Nodo<T>(elem);
        cabeza->siguiente=cabeza;
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
            else{
                previo=cabeza;
                while(previo->siguiente!=cabeza)
                    previo=previo->siguiente;
                cabeza=nuevo;
                previo->siguiente=nuevo;
            }
        }
    }
}
template <class T>
void ListaCircular<T>::eliminarNodo(T elem){
    Nodo<T>* actual=cabeza;
    Nodo<T>* previo=NULL;
    bool borrado=false;
    if(cabeza){
        do{
            if(actual->getDato()==elem){
                if(previo)
                    previo->siguiente=actual->siguiente;
                else{
                    previo=cabeza;
                    while(previo->siguiente!=cabeza)
                        previo=previo->siguiente;
                    cabeza=actual->siguiente;
                    previo->siguiente=cabeza;
                }
                delete actual;
                borrado=true;
                cout<<"eliminado "<<elem<<endl;
                break;
            }
            previo=actual;
            actual=actual->siguiente;
        }while(actual!=cabeza);
        if(previo==actual&&borrado)
            cabeza=NULL;
    }
}

template<class T>
void ListaCircular<T>::recorrerLista(){
    Nodo<T>* actual=cabeza;
    cout<<"[";
    do{

        actual->print();
        //cout<<actual->getDato()<<" - ";
        actual=actual->siguiente;
    }while(actual!=cabeza);
    cout<<"]"<<endl;
}

template<class T>
int ListaCircular<T>::getTamanyo(){
    int cnt=0;
    Nodo<T>* actual=cabeza;
    do{
        cnt++;
        actual=actual->siguiente;
    }while(actual!=cabeza);
    return cnt;
}

template<class T>
ListaCircular<T>::~ListaCircular(){
    Nodo<T> *actual;
    Nodo<T> *inicio=cabeza;
    do{
        actual=cabeza;
        cabeza=cabeza->siguiente;
        delete actual;
    }while(cabeza!=inicio);
}


