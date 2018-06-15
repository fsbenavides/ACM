#include "lista.h"
/*
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
                nodo<T> *aux_nodo= temp1;
                temp->next=temp1->next;
                delete aux_nodo;
                cont++;
                m_num_nodos--;
            }
            temp=temp->next;
            temp1=temp1->next;
        }
    }

    if(cont==0)
    {
        cout<<"no existe el elemento"<<endl;
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
template<typename T>
lista<T>::~lista() {}
*/





















