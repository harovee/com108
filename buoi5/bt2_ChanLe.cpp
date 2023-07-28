#include<stdio.h>
int main(){
	int soNguyen,soDu;
	
	printf("Kiem tra so nguyen: ");
	scanf("%d",&soNguyen);
	
	soDu = soNguyen%2;
	
	if(soDu==0){
		printf("So tren la so chan");
	}
	else{
		printf("So tren la so le");
	}
}
