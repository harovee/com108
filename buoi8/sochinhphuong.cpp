#include<stdio.h>
int main(){
	int x;
	printf("Nhap gia tri cua x: ");
	scanf("%d",&x);
	
	int i, count = 0;
	for(i=0;i*i<=x;i++){
		if(i*i==x){
			printf("%d la so chinh phuong",x);
			count++;
		}
	}
	if(count==0){
		printf("%d khong phai so chinh phuong",x);
	}
}
