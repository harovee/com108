#include<stdio.h>
#include<string.h>
void primeNum();
void telephone();
void shoeInfo();

int main(){
	int select;
	do{
		printf("+-------M-E-N-U------+\n");
		printf("1. Kiem tra so nguyen\n");
		printf("2. Dien thoai\n");
		printf("3. Thong tin giay, dep\n");
		printf("0. Thoat\n");
		printf("+---------------------+\n");
		printf("Moi chon: ");
		scanf("%d",&select);
		
		switch(select){
			case 1:{
				printf("KIEM TRA SO NGUYEN\n");
				primeNum();
				break;
			}
			case 2:{
				printf("DIEN THOAI\n");
				telephone();
				break;
			}
			case 3:{
				printf("THONG TIN VE GIAY, DEP\n");
				shoeInfo();
				break;
			}
			case 0:{
				printf("THOAT");
				break;
			}
			default: printf("KHONG CO CHUC NANG NAY\n");
		}
	}while(select!=0);
}

void primeNum(){
	int numberN;
	do{
	printf("Nhap so nguyen n: ");
	scanf("%d",&numberN);		
	}while(numberN<1);
	
	int count = 0;
	for(int i = 2 ; i < numberN ; i++){
		if(numberN % i ==0){
			count++;
		}
	}
	if(count==0){
		printf("%d la so nguyen to\n",numberN);
	}
	else{
		printf("%d khong phai so nguyen to\n",numberN);
	}
}

void telephone(){
	char phoneBrand[50];
	int phoneCost, boughtYear;
	
	fflush(stdin);
	printf("Nhap thong tin dien thoai: \n");
	printf("Ten hang: ");
	gets(phoneBrand);
	printf("Gia tien: ");
	scanf("%d",&phoneCost);
	printf("Nam mua: ");
	scanf("%d",&boughtYear);
	
	printf("Dien thoai %s co gia %d duoc mua nam %d\n\n",phoneBrand, phoneCost, boughtYear);
}

void shoeInfo(){
	int shoes;
	printf("Nhap so luong cac doi giay, dep: ");
	scanf("%d",&shoes);
	printf("Nhap so tien cac doi giay, dep: \n");
	int cost[shoes];
	for(int i=0 ; i < shoes ; i++){
		printf("Doi thu %d: ",i+1);
		scanf("%d",&cost[i]);
	}
	int count = 0;
	for(int i=0 ; i < shoes ; i++){
		if(cost[i]>200 && cost[i]<1000){
			count++;
		}
	}
	printf("So giay, dep co gia tu 200k - 1tr la: %d\n",count);
	
	int costAverage, costSum;
	for(int i=0 ; i < shoes ; i++){
		costSum += cost[i];
	}
	costAverage = costSum / shoes;
	printf("Trung binh gia tien giay, dep la: %d\n",costAverage);
	
	int min = cost[0];
	int max = cost[shoes -1];
	for(int i=0 ; i < shoes ; i++){
		if(min > cost[i]){
			min = cost[i];
		}
	}
	for(int i=0 ; i < shoes ; i++){
		if(max < cost[i]){
			max = cost[i];
		}
	}
	for(int i=0 ; i < shoes ; i++){
		if(min == cost[i]){
			printf("Vi tri %d co gia tien thap nhat la: %d\n",i+1, min);
		}
	}
	for(int i=0 ; i < shoes ; i++){
		if(max == cost[i]){
			printf("Vi tri %d co gia tien cao nhat la: %d\n",i+1, max);
		}
	}
	
	printf("Sap xep gia tien tang dan: \n");
	int temp;
	for(int i=0 ; i < shoes ; i++){
		for(int j=i+1 ; j < shoes ; j++){
			if(cost[i] > cost[j]){
				temp = cost[i];
				cost[i] = cost[j];
				cost[j]  = temp;
			}
		}
	}
	for(int i=0 ; i < shoes ; i++){
		printf("%d\t",cost[i]);
	}
	printf("\n\n");
}
