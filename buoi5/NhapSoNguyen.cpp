#include<stdio.h>
int main(){
	int soNguyen;
	
	printf("Nhap so nguyen bat ky: ");
	scanf("%d",&soNguyen);
	
	if(soNguyen==0){
		printf("So vua nhap bang 0");
	}
	else if(soNguyen>0){
		printf("So vua nhap la so duong");
	}
	else{
		printf("So vua nhap la so am");
	}
}
