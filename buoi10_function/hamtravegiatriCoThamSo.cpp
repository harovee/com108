#include<stdio.h>
int tinhTong(int a, int b);

int main(){
	int a,b;
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	
	printf("Tong = %d",tinhTong(a,b));
}

int tinhTong(int a, int b){
	int tong = a+b;
	return tong;
}
