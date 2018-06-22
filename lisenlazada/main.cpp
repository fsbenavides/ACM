#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "src\lista.cpp"

using namespace std;

int main()
{
    ListaEnlazada<int> a;
    a.agregarNodo(5);
    a.agregarNodo(4);
    a.recorrerLista();
    a.agregarNodo(1);
    a.recorrerLista();
    a.agregarNodo(0);
    a.recorrerLista();
    a.agregarNodo(5);
    a.recorrerLista();
    a.eliminarNodo(0);
    a.recorrerLista();
    return 0;
}
