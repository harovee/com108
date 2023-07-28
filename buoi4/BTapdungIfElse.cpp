#include<stdio.h>
int main(){
	float a,b;
	printf("Nhap vao so a: ");
	scanf("%f",&a);
	printf("Nhap vao so b: ");
	scanf("%f",&b);
	
	if(b!=0){
		float thuong = a/b;
		printf("Thuong 2 so la: %.2f",thuong);
	}
	else{
	
	printf("Khong the thuc hien phep tinh");
	}
}
