#include <iostream>
#include <stdlib.h>

using namespace std;


bool comprobar(int *a,int *b){
    for(int *i=a;i<a+16;i++){
        for(int *j=b;j<b+16;j++){
            if(*i!=*j)return false;
               return true;
        }
    }
}
void cambiazo(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void print(int *lista){
    int aux=0;
    for(int *i=lista;i<lista+16;i++){

        if(aux%4==0){
            cout<<endl;
            cout<<*i<<" ";
        }
        else
            cout<<*i<<" ";
        aux++;

    }
    cout<<endl;
}
void desordenar(int *a,int num,int *tablero){
    int var;
    int i=0;
    int d=0;
    for(int j=0;j<=num;j++){
        var=rand()%4;
        switch(var){
        case 0:
            if(a<tablero+12){
            cambiazo(a,a+4);
            a=a+4;}
            break;
        case 1:
            if(i<3&&a<tablero+16){
                cambiazo(a,a+1);
                a=a+1;
                if(i<4)
                    i++;
                d--;
            }
            break;
        case 2:
            if(d<3&&a>tablero){
                cambiazo(a,a-1);
                a=a-1;
                if(d<4)
                    d++;
                i--;
            }
            break;
        case 3:
            if(a>=tablero+4){
            cambiazo(a,a-4);
            a=a-4;}
            break;

        }
    }


}
int main()
{
    int tablero[16]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int solucion[16]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    int *a;
    a=tablero;
    int i=0;
    int d=0;

    desordenar(a,2,tablero);
    print((int*)tablero);
    while(true){
        string x;
        cout<<"indique accion"<<endl;
        cin>>x;


        if(x=="salir"){return false;}
        if(x=="mostrar")print((int *)tablero);

        if(x=="w"&&a<tablero+12){
            cambiazo(a,a+4);
            a=a+4;
            print((int *)tablero);
            if(comprobar(tablero,solucion)){cout<<"ganador"<<endl;return false;}


        }
        if(x=="a"&&i<3&&a<tablero+16){
            cambiazo(a,a+1);
            a=a+1;
            print((int *)tablero);

            if(i<4)
                i++;
                d--;
            if(comprobar(tablero,solucion)){cout<<"ganador"<<endl;return false;}

        }
        if(x=="d"&&d<3&&a>tablero){
            cambiazo(a,a-1);
            a=a-1;
            print((int *)tablero);

            if(d<4)
                d++;
                i--;
            if(comprobar(tablero,solucion)){cout<<"ganador"<<endl;return false;}
        }
        if(x=="s"&&a>=tablero+4){
            cambiazo(a,a-4);
            a=a-4;
            print((int *)tablero);
            if(comprobar(tablero,solucion)){cout<<"ganador"<<endl;return false;}

        }


    }
    return 0;
}
