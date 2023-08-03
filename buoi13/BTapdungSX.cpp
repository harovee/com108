#include<stdio.h>
int main(){
	int n;
	printf("Nhap so sv trong lop: ");
	scanf("%d",&n);
	
	float diem[n];
	for(int i=0;i<n;i++){
		printf("\nDiem cua sv thu %d: ",i+1);
		scanf("%f",&diem[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			float hVi;
			if(diem[i]<diem[j]){
				hVi = diem[i];
				diem[i] = diem[j];
				diem[j] = hVi;
			}
		}
	}
	printf("\nDiem theo thu tu giam dan: ");
	for(int i=0;i<n;i++){
		printf("\n %.1f",diem[i]);
	}
}
