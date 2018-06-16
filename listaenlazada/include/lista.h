#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>

#include "nodo.h"

using namespace std;

template <class T>
class lista
{
    public:

        lista();
        ~lista();

        void insertar(T);
        void delete_data(T);
        void print();
        void busca(T);


    private:
        nodo<T> *m_head;
};
template <typename T>
lista<T>::lista()
{
   m_head=NULL;
}

template <typename T>
void lista<T>::insertar(T data_)
{
    nodo<T> *temp =m_head;
    nodo<T> *aux =new nodo<T>(data_);
    //temp->data=data_;
    if(!m_head)
    {
        m_head=aux;

    }
    else
    {
        if(temp<aux)
            temp->next=aux;
        else
            temp=temp->next;

    }
}


template <typename T>
void lista<T>::delete_data(T data_)
{
    nodo<T> *temp = m_head;
    nodo<T> *temp1 = m_head->next;

    int cont = 0;

    if(m_head->data==data_)
    {
        m_head=temp->next;
    }
    else
    {
        while(temp1)
        {
            if(temp1->data==data_)
            {
                nodo<T> *aux_node = temp1;
                temp->next = temp1->next;
                delete aux_node;
                cont++;

            }

            temp=temp->next;
            temp1=temp1->next;
        }
    }

}


template <typename T>
void lista<T>::print()
{
    nodo<T> *temp =m_head;
    if(!m_head){
        cout<<"la lista esta vacia"<<endl;
    }
    else
    {
        while(temp)
        {
            temp->print();
            if(!temp->next)cout<<"NULL";
                temp=temp->next;
        }
    }
    cout<<endl;
}
template <typename T>
void lista<T>::busca(T data_){
    nodo<T> *temp =m_head;
    int cont1 =1;
    int cont2 =0;

    while (temp){
        if(temp->data==data_)
        {
            cout<<"el dato esta en la posicion:" <<cont1<<endl;
            cont2++;
        }
        temp=temp->next;
        cont1++;
    }
    if(cont2==0)
    {
        cout<<"no existe el elemento"<<endl;
    }
    cout<<endl;

}


template<typename T>
lista<T>::~lista() {}
#endif // LISTA_H
