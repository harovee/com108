#include<stdio.h>
int main(){
	int n,i = 5,tong=0;
	printf("Nhap gia tri cua n(n>5): ");
	scanf("%d",&n);
	
	while(i<=n){
		tong+=i;
		i++;
	}
		printf("Tong cac so tu 5 den %d la = %d",n,tong);
}
