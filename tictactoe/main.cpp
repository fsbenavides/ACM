#include <iostream>

using namespace std;
int comprobar(char *a,char *b,char *c){

    if(*a==*(a+1)&&*a==*(a+2)){return 1;}
    else if(*(a+3)==*(a+4)&&*(a+3)==*(a+5))return 1;
    else if(*(a+6)==*(a+7)&&*(a+6)==*(a+8))return 1;
    else if(*b==*(b+1)&&*b==*(b+2)){return 1;}
    else if(*(b+3)==*(b+4)&&*(b+3)==*(b+5))return 1;
    else if(*(b+6)==*(b+7)&&*(b+6)==*(b+8))return 1;
    else if(*c==*(c+1)&&*c==*(c+2)){return 1;}
    else if(*(c+3)==*(c+4)&&*(c+3)==*(c+5))return 1;
    else if(*(c+6)==*(c+7)&&*(c+6)==*(c+8))return 1;

    else if(*a==*(a+3)&&*a==*(a+6)){return 1;}
    else if(*(a+1)==*(a+4)&&*(a+1)==*(a+7))return 1;
    else if(*(a+2)==*(a+5)&&*(a+2)==*(a+8))return 1;
    else if(*b==*(b+3)&&*b==*(b+6)){return 1;}
    else if(*(b+1)==*(b+4)&&*(b+1)==*(b+7))return 1;
    else if(*(b+2)==*(b+5)&&*(b+2)==*(b+8))return 1;
    else if(*c==*(c+3)&&*c==*(c+6)){return 1;}
    else if(*(c+1)==*(c+4)&&*(c+1)==*(c+7))return 1;
    else if(*(c+2)==*(c+5)&&*(c+2)==*(c+8))return 1;

    else if(*a==*(a+4)&&*a==*(a+8)){return 1;}
    else if(*(a+2)==*(a+4)&&*(a+2)==*(a+6))return 1;
    else if(*b==*(b+4)&&*b==*(b+8)){return 1;}
    else if(*(b+2)==*(b+4)&&*(b+2)==*(b+6))return 1;
    else if(*c==*(c+4)&&*c==*(c+8)){return 1;}
    else if(*(c+2)==*(c+4)&&*(c+2)==*(c+6))return 1;

    else if(*a==*b&&*a==*c)return 1;
    else if(*(a+1)==*(b+1)&&*(a+1)==*(c+1))return 1;
    else if(*(a+2)==*(b+2)&&*(a+2)==*(c+2))return 1;
    else if(*(a+3)==*(b+3)&&*(a+3)==*(c+3))return 1;
    else if(*(a+4)==*(b+4)&&*(a+4)==*(c+4))return 1;
    else if(*(a+5)==*(b+5)&&*(a+5)==*(c+5))return 1;
    else if(*(a+6)==*(b+6)&&*(a+6)==*(c+6))return 1;
    else if(*(a+7)==*(b+7)&&*(a+7)==*(c+7))return 1;
    else if(*(a+8)==*(b+8)&&*(a+8)==*(c+8))return 1;

    else if(*c==*(b+4)&&*c==*(a+8))return 1;
    else if(*(a+2)==*(b+4)&&*(a+2)==*(c+6))return 1;
    else if(*(a+6)==*(b+4)&&*(a+6)==*(c+2))return 1;
    else if(*a==*(b+4)&&*a==*(c+8))return 1;

    else if(*a==*(b+3)&&*a==*(c+6))return 1;
    else if(*c==*(b+3)&&*c==*(a+6))return 1;
    else if(*(a+2)==*(b+5)&&*(a+2)==*(c+8))return 1;
    else if(*(c+2)==*(b+5)&&*(c+2)==*(a+8))return 1;
    else if(*a==*(b+1)&&*a==*(c+2))return 1;
    else if(*c==*(b+1)&&*c==*(a+2))return 1;
    else if(*(a+6)==*(b+7)&&*(a+6)==*(c+8))return 1;
    else if(*(c+6)==*(b+7)&&*(c+6)==*(a+8))return 1;


    else
        return 0;

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
    char b[9]={'a','b','c','d','e','f','g','h','i'};
    char c[9]={'1','2','3','4','5','6','7','8','9'};

    int num;
    char casilla;
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

            if(casilla=='1'&&*a=='1'){*a=marca;}
            if(casilla=='2'&&*(a+1)=='2'){*(a+1)=marca;}
            if(casilla=='3'&&*(a+2)=='3'){*(a+2)=marca;}
            if(casilla=='4'&&*(a+3)=='4'){*(a+3)=marca;}
            if(casilla=='5'&&*(a+4)=='5'){*(a+4)=marca;}
            if(casilla=='6'&&*(a+5)=='6'){*(a+5)=marca;}
            if(casilla=='7'&&*(a+6)=='7'){*(a+6)=marca;}
            if(casilla=='8'&&*(a+7)=='8'){*(a+7)=marca;}
            if(casilla=='9'&&*(a+8)=='9'){*(a+8)=marca;}

            break;
        case 2:
            if(casilla=='a'&&*b=='a'){*b=marca;}
            if(casilla=='b'&&*(b+1)=='b'){*(b+1)=marca;}
            if(casilla=='c'&&*(b+2)=='c'){*(b+2)=marca;}
            if(casilla=='d'&&*(b+3)=='d'){*(b+3)=marca;}
            if(casilla=='e'&&*(b+4)=='e'){*(b+4)=marca;}
            if(casilla=='f'&&*(b+5)=='f'){*(b+5)=marca;}
            if(casilla=='g'&&*(b+6)=='g'){*(b+6)=marca;}
            if(casilla=='h'&&*(b+7)=='h'){*(b+7)=marca;}
            if(casilla=='i'&&*(b+8)=='i'){*(b+8)=marca;}
            break;
        case 3:
            if(casilla=='1'&&*c=='1'){*c=marca;}
            if(casilla=='2'&&*(c+1)=='2'){*(c+1)=marca;}
            if(casilla=='3'&&*(c+2)=='3'){*(c+2)=marca;}
            if(casilla=='4'&&*(c+3)=='4'){*(c+3)=marca;}
            if(casilla=='5'&&*(c+4)=='5'){*(c+4)=marca;}
            if(casilla=='6'&&*(c+5)=='6'){*(c+5)=marca;}
            if(casilla=='7'&&*(c+6)=='7'){*(c+6)=marca;}
            if(casilla=='8'&&*(c+7)=='8'){*(c+7)=marca;}
            if(casilla=='9'&&*(c+8)=='9'){*(c+8)=marca;}
            break;
        }





    if(comprobar(a,b,c)==1){
        print(a);
        print(b);
        print(c);
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


