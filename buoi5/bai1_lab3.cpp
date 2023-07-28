#include<stdio.h>
int main(){
	float Diem;
	
	printf("Nhap diem cua ban: ");
	scanf("%f",&Diem);
	
	printf("Hoc luc cua ban la: ");
	if(Diem>=9){
		printf("Xuat sac");
	}
	else if(Diem>=8){
		printf("Gioi");
	}
	else if(Diem>=6.5){
		printf("Kha");
	}
	else if(Diem>=5){
		printf("Trung Binh");
	}
	else if(Diem>=3.5){
		printf("Yeu");
	}
	else{
		printf("Kem");
	}
}
