#include<stdio.h>
#include<string.h>

int main(){
	char ten[100],que[100];
	int tuoi;
	printf("Nhap thong tin: ");
	printf("\nTen: ");
	gets(ten);
	printf("\nTuoi: ");
	scanf("%d",&tuoi);
	
	fflush(stdin);
	
	printf("\nQue quan: ");
	gets(que);
	
	printf("In ra thong tin:\n%s - %d - %s",ten,tuoi,que);
}
