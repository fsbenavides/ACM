#include <iostream>

using namespace std;

void cambiazo(int *a,int *b){
    int aux=*a;
    *a=*b;
    *b=aux;

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

void mayor(int *a,int *b)
{
    if (*a>*b)cambiazo(a,b);


}
void menor(int *a,int *b)
{
    if (*a<*b)cambiazo(a,b);

}




void burbuja(int *lista,int largo,void (*p)(int *,int * )){
    for(int *i=lista;i<lista+largo;i++){
        for(int *j=lista;j<lista+largo-1;j++){

            p(j,j+1);

        }
    }
}

int main()
{
    void (*p)(int *,int *)=menor;

    int a[5]={0,1,2,3,4};
    imprimirlista(a,5);
    burbuja(a,5,p);
    imprimirlista(a,5);

    cout << "Hello world!" << endl;
    return 0;
}
