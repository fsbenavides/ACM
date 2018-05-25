#include <iostream>

using namespace std;
bool comprobar(char *a,char *b,char *c){
    if()return true;
    else if()return true;
    else if()return true;
    else if()return true;
    else if()return true;
    else if()return true;
    else if()return true;
    else if()return true;
    else if()return true;
    else if()return true;

    else
        return false;
}

void print(char *tabla){
    int aux=1;
    for(char *i=tabla;i<tabla+9;i++){
        if(aux%3==0){
            cout<<*i<<endl;
        }
        else
            cout<<*i<<"  ";
        aux++;

    }
    cout<<endl;
}





int main()
{
    char a[9]={'1','2','3','4','5','6','7','8','9'};
    char b[9]={'1','2','3','4','5','6','7','8','9'};
    char c[9]={'1','2','3','4','5','6','7','8','9'};

    int num;
    int casilla;
    char marca;
    char marca1='X';
    char marca2='0';
    int pj;

    int jugador=1;

    while(true){
        if(jugador%2==0){
            marca=marca2;
            pj=2;
            cout<<"turno de jugador 2"<<endl;

        }
        else{
            marca=marca1;
            pj=1;
            cout<<"turno de jugador 1"<<endl;
        }

        if(jugador==1){
            print(a);
            print(b);
            print(c);
        }
        cout<<"seleccione un nivel"<<endl;
        cin>>num;
        cout<<"seleccione una casilla"<<endl;
        cin>>casilla;
        cout<<endl;




        switch(num){

        case 1:

            if(casilla==1&&*a=='1'){*a=marca;}
            if(casilla==2&&*(a+1)=='2'){*(a+1)=marca;}
            if(casilla==3&&*(a+2)=='3'){*(a+2)=marca;}
            if(casilla==4&&*(a+3)=='4'){*(a+3)=marca;}
            if(casilla==5&&*(a+4)=='5'){*(a+4)=marca;}
            if(casilla==6&&*(a+5)=='6'){*(a+5)=marca;}
            if(casilla==7&&*(a+6)=='7'){*(a+6)=marca;}
            if(casilla==8&&*(a+7)=='8'){*(a+7)=marca;}
            if(casilla==9&&*(a+8)=='9'){*(a+8)=marca;}

            break;
        case 2:
            if(casilla==1&&*b=='1'){*b=marca;}
            if(casilla==2&&*(b+1)=='2'){*(b+1)=marca;}
            if(casilla==3&&*(b+2)=='3'){*(b+2)=marca;}
            if(casilla==4&&*(b+3)=='4'){*(b+3)=marca;}
            if(casilla==5&&*(b+4)=='5'){*(b+4)=marca;}
            if(casilla==6&&*(b+5)=='6'){*(b+5)=marca;}
            if(casilla==7&&*(b+6)=='7'){*(b+6)=marca;}
            if(casilla==8&&*(b+7)=='8'){*(b+7)=marca;}
            if(casilla==9&&*(b+8)=='9'){*(b+8)=marca;}
            break;
        case 3:
            if(casilla==1&&*c=='1'){*c=marca;}
            if(casilla==2&&*(c+1)=='2'){*(c+1)=marca;}
            if(casilla==3&&*(c+2)=='3'){*(c+2)=marca;}
            if(casilla==4&&*(c+3)=='4'){*(c+3)=marca;}
            if(casilla==5&&*(c+4)=='5'){*(c+4)=marca;}
            if(casilla==6&&*(c+5)=='6'){*(c+5)=marca;}
            if(casilla==7&&*(c+6)=='7'){*(c+6)=marca;}
            if(casilla==8&&*(c+7)=='8'){*(c+7)=marca;}
            if(casilla==9&&*(c+8)=='9'){*(c+8)=marca;}
            break;
        }





    if(comprobar(a,b,c))
    {
        cout<<"el ganador es el jugador "<<pj<<endl;
        return false;
    }
    print(a);
    print(b);
    print(c);
    jugador++;
    }
    return 0;
}


