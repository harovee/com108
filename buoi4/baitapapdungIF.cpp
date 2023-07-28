#include<stdio.h>
int main(){
	float a,b;
	printf("Nhap vao so thu nhat: ");
	scanf("%f",&a);
	printf("Nhap vao so thu 2: ");
	scanf("%f",&b);
	
	if(b!=0){
		float c = a/b;
		printf("Ket qua la: %.2f",c);	
		}
}
