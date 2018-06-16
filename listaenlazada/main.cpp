#include <iostream>

#include "src\lista.cpp"
#include <nodo.h>



using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    lista<int> a;
    lista<int> b;

    a.insertar(1);
    a.print();
    a.insertar(2);
    a.print();
    a.insertar(3);
    a.print();








    return 0;
}
