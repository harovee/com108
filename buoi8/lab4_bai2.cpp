#include<stdio.h>
int main(){
	int x;
	printf("Nhap vao gia tri x: ");
	scanf("%d",&x);
	
	int i, count = 0;
	for(i=2;i<x;i++){
		if(x%i==0){
		   count++;
		   break;          
		}
	}
	if(count==0){
		printf("So tren la so nguyen to");
	}
	else{
		printf("So tren khong phai so nguyen to");
	}
}
