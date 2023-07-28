//void - ko tra ve gia tri( san pham trong ham ko the su dung o ngoai` ham)
#include<stdio.h>
void nhapXuat(){
	int a;
	printf("a = ");
	scanf("%d",&a);
	printf("In ra so vua nhap: %d\n",a);
}

int main(){
	printf("Lan 1: \n");
	nhapXuat();
	printf("lan 2: \n");
	nhapXuat();
}
