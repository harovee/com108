#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao so phan tu mang: ");
	scanf("%d",&n);
	
	int a[n];
	for(int i =0;i<n;i++){
		printf("Nhap vao gia tri cua ptu %d trong mang: \n",i+1);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		printf("Gia tri cua ptu %d trong mang la: %d\n",i,a[i]);
	}
}
