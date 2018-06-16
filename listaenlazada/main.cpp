#include <iostream>

#include <lista.h>
#include <nodo.h>



using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    lista<int> a;
    lista<int> b;

    int c=2;

    a.fill_user(2);
    a.add_end(3);
    a.print();
    a.orden();
    a.print();







    return 0;
}
