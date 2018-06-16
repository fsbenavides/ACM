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
    //b.fill_user(3);



    a.add_end(3);



    a.delete_data(c);

    a.print();
    /*
    b.print();

    a.unir(b);

    a.print();
    a.add_head(10);
    a.print();
    */





    return 0;
}
