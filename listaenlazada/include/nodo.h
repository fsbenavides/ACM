#ifndef NODO_H
#define NODO_H

#include <iostream>

using namespace std;


template<class T>
class nodo
{
    public:
        nodo();
        nodo(T);
        ~nodo();

        nodo *next;
        T data;

        void delete_all();
        void print();

};
template <typename T>
nodo<T>::nodo()
{
    data=NULL;
    next=NULL;
}

template <typename T>
nodo<T>::nodo(T data_)
{
    data=data_;
    next=NULL;
}

template <typename T>

void nodo<T>::delete_all()
{
    if(next)
        next->delete_all();
    delete this;
}

template <typename T>
void nodo<T>::print()
{
    cout<<data<<"->";
}

template <typename T>
nodo<T>::~nodo(){}


#endif // NODO_H
