#include<stdio.h>
int main(){
	int cTy[6];
	for(int i =0;i<6;i++){
		printf("Nhap muc luong cong ty thu %d: ",i+1);
		scanf("%d",&cTy[i]);
	}
	for(int i=0;i<6;i++){
		printf("Cong ty thu %d cho ban %d dong\n",i,cTy[i]);
	}
}
