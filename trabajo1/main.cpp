#include <iostream>

using namespace std;

int main()
{
    int litros;
    int aux1;
    int aux2;
    int aux3;

    int siete=0;
    int cinco=0;
    int tres=0;
    int uno=0;


    cout<<"¿Cuantos litros de leche?"<<endl;
    cin>>litros;
    if(litros<0)cout<<"numero invalido"<<endl;
    else
        aux1=litros/7;
        aux2=litros%7;

        siete=aux1;

        if(aux2>=5){
            aux3=aux2%5;
            if(aux3==0){
                cinco++;
            }
        }
        if(aux2>=3){
            if(aux2%3==0){
                tres++;
            }
        }
        if(aux2<3){
            uno++;

        }

        cout<<"se necesitan "<<siete<<" botellas de 7 litros, "<<cinco<<" botellas de 5 litros, "<<tres<<" botellas de 3 litros y "<<uno<<" botellas de 1 litro"<<endl;


    return 0;
}
