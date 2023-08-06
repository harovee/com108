#include<stdio.h>
#include<string.h>

void rainlyDay();
void factorial();
void familyMem();

int main(){
	int select;
	do{
		printf("+----------M-E-N-U----------+\n");
		printf("1. Thong tin ve so ngay mua trong thang\n");
		printf("2. Giai thua\n");
		printf("3.Thong tin cac thanh vien trong GD\n");
		printf("0. Thoat\n");
		printf("+-------------------------------+\n");
		printf("Moi chon: \n");
		scanf("%d",&select);
		
		switch(select){
			case 1:{
				printf("THONG TIN VE SO NGAY MUA TRONG THANG\n");
				rainlyDay();
				break;
			}
			case 2:{
				printf("GIAI THUA\n");
				factorial();
				break;
			}
			case 3:{
				printf("THONG TIN CAC THANH VIEN TRONG GIA DINH\n");
				familyMem();
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

void rainlyDay(){
	char nationName[100];
	int month, year, days;
	
	fflush(stdin);
	printf("Nhap ten quoc gia: ");
	gets(nationName);
	printf("Nhap nam: ");
	scanf("%d",&year);
	printf("Nhap thang: ");
	scanf("%d",&month);
	printf("Nhap so ngay mua: ");
	scanf("%d",&days);
	
	printf("%s, nam %d, thang %d co %d ngay mua\n\n", nationName, year, month, days);
}

void factorial(){
	int n;
	do{
		printf("Nhap so nguyen n: ");
		scanf("%d",&n);
	}while(n<=4);
	
	int facto = 1;
	for(int i=2;i<=n;i++){
		facto *= i;
	}
	printf("Giai thua cua so nguyen n = %d\n\n",facto);
}

void familyMem(){
	int member;
	printf("+---Thong tin thanh vien trong GD---+\n");
	printf("Moi nhap so luong nguoi: ");
	scanf("%d",&member);
	
	int money[member];
	for(int i=0 ; i<member ; i++){
		printf("Tien tieu trong thang cua thanh vien thu %d: ",i+1);
		scanf("%d",&money[i]);
	}
	
	printf("+---Xuat thong tin---+\n");
	printf("So luong thanh vien: %d\n",member);
	printf("Vi tri thanh vien tieu tien nhieu nhat: ");
	int max = money[0];
	for(int i=0 ; i<member ; i++){
		if(max < money[i]){
			max = money[i]; 
		}
	}
	for(int i=0 ; i<member ; i++){
		if(max == money[i]){
			printf("%d\n",i+1);
		}
	}
	
	int average, moneyTotal;
	printf("So tien trung binh can tieu cua moi nguoi la: ");
	for(int i=0 ; i<member ; i++){
		moneyTotal += money[i];
	}
	average = moneyTotal / member;
	printf("%d\n",average);
	
	int count = 0;
	for(int i=0 ; i<member ; i++){
		if(money[i] > 3000){
			count++;
		}
	}
	printf("So thanh vien tieu tien tren 3tr/1thang la: %d\n",count);
	
	for(int i=0 ; i<member ; i++){
		for(int j=i+1 ; j<member ; j++){
			int permute;
			if(money[i] < money[j]){
				permute = money[i];
				money[i] = money[j];
				money[j] = permute;
			}
		}
	}
	printf("Sap xep luong tien tieu theo thu tu giam dan: \n");
	for(int i=0 ; i<member ; i++){
		printf("%d\t",money[i]);
	}
	printf("\n\n");
}
