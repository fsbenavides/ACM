#include<iostream>
#include<string>

using namespace std;

int main () {
	
	char x[4];
	int xlen=4;
	int z[xlen];
	int z1=0;
	char alfabeto[25];

	
	/*
	alfabeto[0}="a";
	alfabeto[1]="b";
	alfabeto[2]="c";
	alfabeto[3]="d";
	alfabeto[4]="e";
	alfabeto[5]="f";
	alfabeto[6]="g";
	alfabeto[7]="h";
	*/
	
	for(int i=0;i<25;i++){
		int a=97;
		alfabeto[i]=a;
		a++;
	}
	
	
	for(int i=0;i<xlen;i++){
		for(int j=0;j<25;j++){
			
			if(x[i]==alfabeto[j]){
				z[z1]=j;
				z1++;
				
			}
			   
		}
		
	}
	
	
	
	
	
	
	
	
	return 0;
}

