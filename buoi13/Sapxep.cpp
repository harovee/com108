#include<stdio.h>
int main(){
	int a[5] = {6,2,9,4,7};
	//Sap xep gia tri tang dan
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			int hVi;
			if(a[i] > a[j]){
				hVi = a[i];
				a[i] = a[j];
				a[j] = hVi;
			}
		}
	}
	for(int i=0;i<5;i++){
		printf("\t %d",a[i]);
	}
}
