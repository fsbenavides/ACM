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

        void add_head(T);
        void add_end(T);
        void delete_all();
        void delete_data(T);
        void print();
        void fill_user(int);
        void busca(T);
        void unir(lista);

    private:
        nodo<T> *m_head;
        int m_num_nodos;


};
template <typename T>
lista<T>::lista()
{
   m_num_nodos=0;
   m_head=NULL;
}

template <typename T>
void lista<T>::add_head(T data_)
{
    nodo<T> *new_nodo =new nodo<T> (data_);
    nodo<T> *temp=m_head;

    if(!m_head){
        m_head=new_nodo;
    }
    else{
        new_nodo->next =m_head;
        m_head= new_nodo;

        while(temp)
        {
            temp=temp->next;
        }

    }
    m_num_nodos++;

}
template <typename T>
void lista<T>::add_end(T data_)
{
    nodo<T> *new_nodo =new nodo<T> (data_);
    nodo<T> *temp=m_head;

    if(!m_head)
    {
        m_head=new_nodo;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next=new_nodo;
        new_nodo->prev=temp;

    }
    m_num_nodos++;
}

template <typename T>
void lista<T>::delete_all()
{
    m_head->delete_all();
    m_head=0;
}

template <typename T>
void lista<T>::delete_data(T x)
{
    nodo<T> *temp = m_head;
    nodo<T> *temp1 = m_head->next;
    nodo<T> *temp2 = temp1->next;

    int cont = 0;

    if(m_head->data==x)
    {
        m_head=temp->next;
    }
    else
    {

        while(temp1->next!=NULL)
        {

            if(temp1->data==x)
            {
                cout<<"asdf"<<endl;
                //temp->print();
                temp1->print;
                temp1->delete_all();
                /*
                temp->next=temp2;
                temp2->prev=temp->next;

                //cont++;
                m_num_nodos--;
                */

            }


            cont++;
            cout<<cont<<endl;
            temp=temp->next;
            temp1=temp1->next;
            temp2=temp2->next;
        }

    }

}

template <typename T>
void lista<T>::fill_user(int dime)
{
    T ele;
    for (int i=0;i<dime;i++)
    {
        cout<<"ingresa el elemento"<< i+1<<endl;
        cin>>ele;
        add_end(ele);
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
template <typename T>
void lista<T>::unir(lista a)
{
    nodo<T> *temp2=a.m_head;
    while(temp2)
    {
        add_end(temp2->data);
        temp2=temp2->next;
    }

}

template<typename T>
lista<T>::~lista() {}
#endif // LISTA_H
