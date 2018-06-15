#include <iostream>

#include <lista.h>
#include <nodo.h>



using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    lista<int> a;
    int b=12;
    int c=5;

    a.add_head(b);
    a.fill_user(1);

    a.print();
    a.add_end(c);
    a.print();
    a.delete_all();
    a.print();



    return 0;
}
