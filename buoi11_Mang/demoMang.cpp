#include<stdio.h>
int main(){
	//khai bao va truyen vao so phan tu mang
	int a[5];
	
	//khai bao va gan gia tri cho cac phan tu
	int b[4] = {3,7,11,8};
	
	//Nhap gia tri cho cac ptu trong mang
	for(int i = 0;i<5;i++){
		printf("Nhap gia tri cho ptu thu %d: ",i);
		scanf("%d",&a[i]);
	}
	
	//Xuat cac gia tri trong mang ra man hinh
	for(int i=0;i<5;i++){
		printf("Gia tri cua ptu thu %d la %d\n",i,a[i]);
	}
}
