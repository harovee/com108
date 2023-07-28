#include<stdio.h>
int main(){
	int a,b,max;
	printf("Xin moi nhap 2 so a,b: ");
	printf("\na = ");
	scanf("%d",&a);
	printf("\nb = ");
	scanf("%d",&b);
	
	if(max<b){
		max = b;
	}
	printf("max = %d",max);
}
