#include<stdio.h>
int main(){
	int n,i = 5,tong=0;
	printf("Nhap gia tri cua n(n>5): ");
	scanf("%d",&n);
	
		while(i<=n){
			if(i%2==0){
			tong+=i;
		    }
		i++;
		}
		printf("Tong cac so chan tu 5 den %d la = %d",n,tong);
	}
