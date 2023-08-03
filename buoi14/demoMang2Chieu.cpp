//a[n][m] -n- so hang`. m-so cot = (n mang 1 chieu` co m phan tu trong moi mang)
#include<stdio.h>
int main(){
	int a[2][3];
	
	printf("Nhap gia tri trong mang\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("Nhap gia tri cho a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("In ra mang\n");
	
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
}
