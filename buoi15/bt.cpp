#include<stdio.h>
#include<string.h>
void integer();
void expectMark();
void foodInfo();

int main(){
	int select;
	do{
		printf("_______________M-E-N-U__________________");
		printf("\n1. Tinh tong tu 1 den so nguyen n");
		printf("\n2. Kiem tra diem mong muon");
		printf("\n3. Thong tin cac loai thuc pham");
		printf("\n4. Thoat");
		printf("\n _____________________________________");
		printf("\n Moi chon chuc nang: ");
		scanf("%d",&select);
		
		switch(select){
			case 1:{
				printf("Tinh tong tu 1 den so nguyen n: \n");
				integer();
				break;
			}
			case 2:{
				printf("Kiem tra diem mong muon mon C: \n");
				expectMark();
				break;
			}
			case 3:{
				printf("Thong tin cac loai thuc pham: \n");
				foodInfo();
				break;
			}
			case 4:{
				printf("Thoat");
				break;
			}
			default: printf("Khong co chuc nang nay\n");
		}
	}while(select!=4);	
}

void integer(){
	int n, sum;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		sum += i;
	}
	printf("Tong cac so tu 1 den n la: %d\n\n",sum);
}

void expectMark(){
	int mark;
	do{
		printf("Nhap diem mong muon: ");
		scanf("%d",&mark);
	}while(mark < 0 || mark > 10);
	
	if(mark<3){
		printf("Can nghiem tuc xem xet lai\n");
	}
	else if(mark>=3 && mark <=4){
		printf("Luoi hoc qua\n");
	}
	else if(mark>=5 && mark <=6){
		printf("Cham chi hon\n");
	}
	else if(mark>=7 && mark <=8){
		printf("Kien thuc on\n");
	}
	else{
		printf("Tiep tuc phat huy\n");
	}
}

void foodInfo(){
	int food;
	do{
	printf("Nhap so luong cac loai thuc pham can mua: ");
	scanf("%d",&food);
    }while(food<0);
	int money[food];
	printf("Nhap so tien phai tra cho cac loai thuc pham: \n");
	for(int i=0;i<food;i++){
		printf("Loai thu %d: ",i+1);
		scanf("%d",&money[i]);
	}
	
	int count=0;
	for(int i=0;i<food;i++){
		if(money[i]>=20 && money[i]<=100){
			count++;
		}
	}
	printf("So luong loai thuc pham co gia tu 20k - 100k la: %d\n",count);
	
	int moneyAver, moneySum;
	for(int i=0;i<food;i++){
		moneySum += money[i];
	}
	moneyAver = moneySum / food;
	printf("Trung binh tien cac loai thuc pham: %d\n",moneyAver);
	
	int max = money[0];
	for(int i=0;i<food;i++){
		if(max < money[i]){
			max = money[i];
		}
	}
	printf("Loai thuc pham co gia cao nhat: %d\n",max);
	
	printf("Mang gia tien giam dan: \n");
	for(int i=0; i<food; i++){
		int temp;
		for(int j=i+1; j<food; j++){
			if(money[i]<money[j]){
				temp = money[i];
				money[i] = money[j];
				money[j] = temp;
			}
		}
	}
	for(int i=0;i<food;i++){
		printf("%d\t",money[i]);
	}
	printf("\n\n");
}
