#include<stdio.h>
void soNguyen();
void khachSan();
	
int main(){
	int chon;
	do{
		printf("-----MENU-----\n");
		printf("1. So Nguyen\n");
		printf("2. Khach San\n");
		printf("3. Thoat\n");
		printf("-------------\n");
		printf("Moi ban chon chuc nang: ");
		scanf("%d",&chon);
		
		switch(chon){
			case 1:{
				printf("SO NGUYEN\n");
				soNguyen();
				break;
			}
			case 2:{
				printf("KHACH SAN\n");
				khachSan();
				break;
			}
		}
	}while(chon!=3);
}

void soNguyen(){
	int n;
	do{
		printf("Nhap so nguyen n lon hon 3: ");
		scanf("%d",&n);
	}while(n<=3);
	
	printf("Cac so chan tu 3 den %d la: \n",n);
	for(int i=4;i<=n;i++){
		if(i%2==0){
			printf("%d\n",i);
		}
	}
}
void khachSan(){
	int n;
	printf("++++++++++++++++++++++++++++++++\n");
	printf("Nhap so phong khach san: ");
	scanf("%d",&n);
	printf("Dien tich moi phong khach san: \n");
	
	float phong[n];
	for(int i=0;i<n;i++){
		printf("Dien tich phong thu %d: ",i+1);
		scanf("%f",&phong[i]);
	}
	printf("+++++++++++++++++++++++++++++++++\n");
	printf("Khac san co %d phong\n",n);
	
	float dTichTB, tongDT, max = phong[0];
	for(int i=0;i<n;i++){
		if(max<phong[i]){
			max = phong[i];
		}
	}
 	printf("Dien tich phong lon nhat la: %.1f\n",max);
 	
 	int count = 0;
 	for(int i=0;i<n;i++){
 		tongDT += phong[i];
 		count++;
	 }
	 dTichTB = tongDT/count;
	 printf("Dien tich trung binh moi phong la: %.1f\n",dTichTB);
}
