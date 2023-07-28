#include<stdio.h>
int main(){
	float canh1;
	float canh2;
	printf("Nhap kich thuoc canh 1: ");
	scanf("%f",&canh1);
	printf("Nhap kich thuoc canh 2: ");
	scanf("%f",&canh2);
	float chuVi=(canh1+canh2)*2;
	float dienTich=(canh1*canh2);
	
	printf("chu vi hinh cn la %.2f",chuVi);
	printf("\ndien tich cn la %.2f",dienTich);
}
