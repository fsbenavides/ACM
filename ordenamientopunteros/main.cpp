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
void quicksort (int *lista, int largo) {
    if (largo < 2)
        return;
    int p = lista[largo / 2];
    int *l = lista;
    int *r = lista + largo - 1;
    while (l <= r) {
        if (*l < p) {
            l++;
        }
        else if (*r > p) {
            r--;
        }
        else {
            int t = *l;
            *l = *r;
            *r = t;
            l++;
            r--;
        }
    }
    quicksort(lista, r - lista + 1);
    quicksort(l, lista + largo - l);
}
void insertionsort(int *arr, int n)
{
   int key;
   int *j;
   for (int *i = arr; i < arr+n; i++)
   {
       key = *i;
       j = i-1;

       while (j >= arr && *j > key)
       {
           *(j+1) = *j;
           j = j-1;
       }
       *(j+1) = key;
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
    int arr[10]={3,2,5,4,1,10,8,9,7,6};

    imprimirlista(arr,10);
    insertionsort(arr,10);
    imprimirlista(arr,10);





    return 0;
}



