#include<stdio.h>
int main(){
	int so1;
	int so2;
	printf("nhap so thu nhat: ");
	scanf("%d",&so1);
	printf("nhap so thu hai: ");
	scanf("%d",&so2);
	int tong = so1 + so2;
	int hieu = so1 - so2;
	printf("tong 2 so la: %d",tong);
	printf("hieu 2 so la: %d",hieu);
}
