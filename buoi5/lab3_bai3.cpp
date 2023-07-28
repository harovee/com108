#include<stdio.h>
int main(){
	float kwh,Gia;
	float Bac1 = 1.678,Bac2 = 1.734,Bac3 = 2.014,Bac4 = 2.536,Bac5 = 2.834, Bac6 = 2.927;
	
	printf("Dien nang tieu thu thang nay la: ");
	scanf("%f",&kwh);
	
	if(kwh<=50){
		Gia = kwh*Bac1;
		printf("Tien dien phai dong la: %.3f",Gia);
	}
	else if(kwh<=100){
		Gia = 50*Bac1 + ((kwh - 50)*Bac2);
		printf("Tien dien phai dong la: %.3f",Gia);
	}
	else if(kwh<=200){
		Gia = 50*Bac1 + 50*Bac2 + ((kwh - 100)*Bac3);
		printf("Tien dien phai dong la: %.3f",Gia);
	}
	else if(kwh<=300){
		Gia = 50*Bac1 + 50*Bac2 + 100*Bac3 + ((kwh - 200)*Bac4);
		printf("Tien dien phai dong la: %.3f",Gia);
	}
	else if(kwh<=400){
		Gia = 50*Bac1 + 50*Bac2 + 100*Bac3 + 100*Bac4 + ((kwh - 300)*Bac5);
		printf("Tien dien phai dong la: %.3f",Gia);
	}
	else{
		Gia = 50*Bac1 + 50*Bac2 + 100*Bac3 + 100*Bac4 + 100*Bac5 + ((kwh-400)*Bac6);
		printf("Tien dien phai dong la: %.3f",Gia);
	}
}
