#include <iostream>

using namespace std;

void cambiazo(int *a,int *b){
    int aux=*a;
    *a=*b;
    *b=aux;

}

void burbuja(int *lista,int largo){
    for(int *i=lista;i<lista+largo;i++){
        for(int *j=lista;j<lista+largo-1;j++){
            if(*j>*(j+1)){
                cambiazo(j,j+1);
            }
        }
    }
}

void imprimirlista(int *lista,int largo){
    for(int *i=lista;i<lista+largo;i++){
           if(i==lista+largo-1){
            cout<<*i<<endl;
           }
           else
            cout<<*i<<",";
    }
}

int division(int *lista,int inicio,int fin){
    int *pivote=lista+fin;
    int *var=lista;
    for (int *i=lista;i<lista+fin;i++){
        if(*i<=*pivote){
            var++;
            cambiazo(var,i);
        }
    }
    cambiazo(var+1,lista+fin);
    return (*var+1);

}

void quicksort(int *lista,int inicio, int fin){
    if(inicio<fin){
        int p =division(lista,inicio,fin);
        quicksort(lista,inicio,p-1);
        quicksort(lista,p+1,fin);
    }


}


void selectionsort(int *lista, int largo){

    int *minimo;

    for (int *i = lista; i < lista+largo; i++){
        minimo = i;
        for (int *j = i+1; j < lista+largo; j++)
          if (*j < *minimo)
            minimo = j;

        cambiazo(minimo,i);
    }
}

void insertionsort(int *lista, int largo){
   int *clave;
   int *j;
   for (int *i = lista; i < lista+largo; i++)
   {
       clave = i;
       j = i-1;
       while (j >= 0 && *j > *clave)
       {
           ++j =j;
           j--;
       }
       *(j++) = *clave;
   }
}




void cocktail(int *lista,int largo){
    bool cambiado=true;
    while(cambiado){
        cambiado=false;

        for(int *i=lista;i<lista+largo;++i){
            if(*i>*(i+1)){
                cambiazo(i,i+1);
                cambiado=true;
            }
        }

        if(!cambiado){
            break;
        }

        cambiado=false;


        for(int *i=lista+largo-1;i>=lista;--i){
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



