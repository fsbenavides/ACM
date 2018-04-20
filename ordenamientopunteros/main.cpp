#include <iostream>

using namespace std;

void cambiazo(int *a,int *b){
    int aux=*a;
    *a=*b;
    *b=aux;

}

void burbuja(int lista[],int largo){
    for(int *i=lista;i<&lista[largo];i++){
        for(int *j=lista;j<&lista[largo]-1;j++){
            if(*j>*(j+1)){
                cambiazo(j,j+1);
            }
        }
    }
}

void imprimirlista(int lista[],int largo){
    for(int *i=lista;i<&lista[largo];i++){
           if(*i==lista[largo-1]){
            cout<<*i<<endl;
           }
           else
            cout<<*i<<",";
    }
}


int division(int lista[],int inicio,int fin){
    int *pivote=(lista+fin-1);
    int var=inicio-1;
    for (int *i=lista;i<lista+fin;i++){
        if(*i<=*pivote){
            var++;
            cambiazo(lista+var,i);
        }
    }
    cambiazo(lista+var+1,lista+fin);
    return (var+1);
}

void quicksort(int lista[],int inicio, int fin){
    if(inicio<fin){
        int p = division(lista,inicio,fin);
        quicksort(lista,inicio,p-1);
        quicksort(lista,p+1,fin);
    }
}



void cocktail(int lista[],int largo){
    bool cambiado=true;
    while(cambiado){
        cambiado=false;

        for(int *i=lista;i<&lista[largo];++i){
            if(*i>*(i+1)){
                cambiazo(i,i+1);
                cambiado=true;
            }
        }

        if(!cambiado){
            break;
        }

        cambiado=false;


        for(int *i=&lista[largo]-1;i>=lista;--i){
            if(*i>*(i+1)){
                cambiazo(i,i+1);
                cambiado=true;
            }
        }
    }
}






int main()
{
    int arr[5]={3,2,5,4,1};

    imprimirlista(arr,5);
    quicksort(arr,0,5);
    imprimirlista(arr,5);





    return 0;
}



