#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;


void comprobar(int *a,int *b,bool *x){
    for(int i=0;i<16;i++){
        if(*(a+i)!=*(b+i))*x=false;
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
void desordenar(int *&a,int num,int *tablero,int &i,int &d){
    int var;
    a=tablero+15;
    i=3;
    d=0;
    for(int j=0;j<=num;j++){
        var=rand()%4;
        switch(var){
        case 0:
            if(a<tablero+12){
            cambiazo(a,a+4);
            a=a+4;}
            break;
        case 1:
            if(i<3&&a<tablero+15){
                cambiazo(a,a+1);
                a=a+1;
                 if(i<4){
                    i++;
                    if(d>0)
                        d--;
                }
            }
            break;
        case 2:
            if(d<3&&a>tablero){
                cambiazo(a,a-1);
                a=a-1;
                if(d<4){
                    d++;
                    if(i>0)
                        i--;
                }
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
    int tablero[16]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0};
    int solucion[16]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0};

    int *a;
    a=tablero+15;
    int i=3;
    int d=0;
    bool y=true;

    desordenar(a,2,tablero,i,d);
    print((int*)tablero);
    while(true){
        char x;
        cout<<"indique accion"<<endl;
        x=getche();
        y=true;




        if(x=='s'&&a<tablero+12){
            cambiazo(a,a+4);
            a=a+4;
            print((int *)tablero);
            comprobar(tablero,solucion,&y);
            if(y){cout<<"ganador"<<endl;return false;}

        }
        if(x=='d'&&i<3&&a<tablero+15){
            cambiazo(a,a+1);
            a=a+1;
            print((int *)tablero);

            if(i<3){
                i++;
                if(d>0)
                    d--;
            }

            comprobar(tablero,solucion,&y);
            if(y){cout<<"ganador"<<endl;return false;}

        }
        if(x=='a'&&d<3&&a>tablero){
            cambiazo(a,a-1);
            a=a-1;
            print((int *)tablero);

            if(d<3){
                d++;
                if(i>0)
                    i--;
            }

            comprobar(tablero,solucion,&y);
            if(y){cout<<"ganador"<<endl;return false;}
        }
        if(x=='w'&&a>=tablero+4){
            cambiazo(a,a-4);
            a=a-4;
            print((int *)tablero);
            comprobar(tablero,solucion,&y);
            if(y){cout<<"ganador"<<endl;return false;}

        }


    }
    return 0;
}
