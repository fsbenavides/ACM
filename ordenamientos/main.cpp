#include <iostream>

using namespace std;


void cambiazo(int *a,int *b){
    int aux=*a;
    *a=*b;
    *b=aux;

}

void burbuja(int lista[],int largo){
    for(int i=0;i<largo-1;i++){
        for(int j=0;j<largo-i-1;j++){
            if(lista[j]>lista[j+1]){
                cambiazo(&lista[j],&lista[j+1]);
            }
        }
    }
}

void imprimirlista(int lista[],int largo){
    for(int i=0;i<largo;i++){
           if(i==largo-1){
            cout<<lista[i]<<endl;
           }
           else
            cout<<lista[i]<<",";
    }
}


int division(int lista[],int inicio,int fin){
    int pivote=lista[fin];
    int var=inicio-1;
    for (int i=inicio;i<fin;i++){
        if(lista[i]<=pivote){
            var++;
            cambiazo(&lista[var],&lista[i]);
        }
    }
    cambiazo(&lista[var+1],&lista[fin]);
    return (var+1);


}

void quicksort(int lista[],int inicio, int fin){
    if(inicio<fin){
        int p =division(lista,inicio,fin);
        quicksort(lista,inicio,p-1);
        quicksort(lista,p+1,fin);
    }


}



void cocktail(int lista[],int largo){
    bool cambiado=true;
    int inicio=0;
    int fin = largo-1;

    while(cambiado){
        cambiado=false;

        for(int i=inicio;i<largo;++i){
            if(lista[i]>lista[i+1]){
                cambiazo(&lista[i],&lista[i+1]);
                cambiado=true;
            }
        }

        if(!cambiado){
            break;
        }

        cambiado=false;

        --fin;

        for(int i=fin-1;i>=inicio;--i){
            if(lista[i]>lista[i+1]){
                cambiazo(&lista[i],&lista[i+1]);
                cambiado=true;
            }
        }
        ++inicio;
    }
}

void insertionsort(int lista[], int largo){
   int clave;
   int j;
   for (int i = 1; i < largo; i++)
   {
       clave = lista[i];
       j = i-1;
       while (j >= 0 && lista[j] > clave)
       {
           lista[j+1] = lista[j];
           j = j-1;
       }
       lista[j+1] = clave;
   }
}

void selectionsort(int lista[], int largo){

    int minimo;

    for (int i = 0; i < largo-1; i++){
        minimo = i;
        for (int j = i+1; j < largo; j++)
          if (lista[j] < lista[minimo])
            minimo = j;

        cambiazo(&lista[minimo], &lista[i]);
    }
}


int main()
{
    int arr[5]={3,2,5,4,1};

    imprimirlista(arr,5);
    selectionsort(arr,5);
    imprimirlista(arr,5);




    return 0;
}
