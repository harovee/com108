#include<stdio.h>
int main(){
	int tien;
	
	printf("Hom nay cho ny an gi?");
	printf("\nTrong vi co: ");
	scanf("%d",&tien);
	
	printf("Vay thi cho ny an: ");
	if(tien>=1000){
		printf("GoGi");
	}
	else if(tien>=500){
		printf("NhatNuong");
	}
	else if(tien>=200){
		printf("Bun Bo Hue");
	}
	else if(tien>=50){
		printf("My tom");
	}
	else{
		printf("Nuoc loc");
	}
}
