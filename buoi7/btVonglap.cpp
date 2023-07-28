#include<stdio.h>
int main(){
	int a;
	printf("NHap gia tri a: ");
	scanf("%d",&a);
	while(a<=0){
		printf("\nNhap lai gia tri a");
		a+=1;
	}
}
