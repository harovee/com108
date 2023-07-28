#include<stdio.h>
void tinhTong(){
	int n,i,tong=0;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		tong+=i;
	}
	printf("Tong tu 1 den n = %d",tong);
}
int main(){
	tinhTong();
}
