#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "src\lista.cpp"

using namespace std;

int main()
{
    ListaCircular<int> lis;
    lis.agregarNodo(7);
    lis.recorrerLista();
    lis.agregarNodo(3);
    lis.recorrerLista();
    lis.agregarNodo(1);
    lis.recorrerLista();
    lis.agregarNodo(5);
    lis.recorrerLista();
    lis.agregarNodo(4);
    lis.recorrerLista();
    lis.agregarNodo(2);
    lis.recorrerLista();
    lis.eliminarNodo(5);
    lis.recorrerLista();


}
