#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao so nguoi yeu: ");
	scanf("%d",&n);
	
	float a[n];
	for(int i=0;i<n;i++){
		printf("Nhap vao so do vong eo cua nguoi thu %d: \n",i+1);
		scanf("%f",&a[i]);
	}
	for(int i=0;i<n;i++){
		printf("So do vong eo cua nguoi thu %d la %.1f\n",i+1,a[i]);
	}
}
