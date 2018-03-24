#include<iostream>
#include<string>

using namespace std;

int main () {
	
	char x[4];
	x='hola';
	int xlen=4;
	int z[xlen];
	int z1=0;
	char alfabeto[27];
	char alfabetoin[27];
	
	
	for(int i=0;i<27;i++){
		int a=97;
		alfabeto[i]=a;
		a++;
	}
	
	for(int i=0;i<27;i++;){
		int a=122;
		alfabetoin[i]=a;
		a--;
	}
	
	
	for(int i=0;i<xlen;i++){
		for(int j=0;j<27;j++){
			
			if(x[i]==alfabeto[j]){
				z[z1]=j;
				z1++;
			}
		}
	}
	
	for(int i=0;i<z1;i++){
		for(int j=0;j<27;j++){
			
			if (z[i]==j){
				x[i]==alfabetoin[j];
			}
			
		}
		
	
		
		
	}
	
	
	
	
	
	
	
	
	return 0;
}

