#include<stdio.h>
#include<string.h>
void subjectInfo();
void payAfterGrad();
void memberInfor();

int main(){
	int chon;
	do{
		printf("+----------M-E-N-U----------+\n");
		printf("1. Thong tin ve mon hoc\n");
		printf("2. Luong khi ra truong\n");
		printf("3.Thong tin cac thanh vien trong lop\n");
		printf("-1. Thoat\n");
		printf("+-------------------------------+\n");
		printf("Moi chon: \n");
		scanf("%d",&chon);
		
		switch(chon){
			case 1:{
				printf("THONG TIN VE MON HOC\n");
				subjectInfo();
				break;
			}
			case 2:{
				printf("LUONG KHI RA TRUONG\n");
				payAfterGrad();
				break;
			}
			case 3:{
				printf("THONG TIN CAC THANH VIEN TRONG LOP\n");
				memberInfor();
				break;
			}
			case -1:{
				printf("THOAT!");
				break;
			}
			default: printf("Khong co chuc nang nay\n\n");
		}
	}while(chon!=-1);
}

void subjectInfo(){
	char sub[100], lecturerName[100];
	int stamp;
	float desireMark;
	
	fflush(stdin);
	
	printf("Nhap ten mon hoc: ");
	gets(sub);
	printf("Nhap so tin chi: ");
	scanf("%d",&stamp);
	
	fflush(stdin);
	printf("Nhap ten giang vien: ");
	gets(lecturerName);
	printf("Nhap diem mong muon: ");
	scanf("%f",&desireMark);
	
	printf("Thong tin mon hoc: \n");
	printf("Mon hoc: %s\nSo tin chi: %d\nTen giang vien: %s\nDiem mong muon: %.1f\n\n",sub,stamp,lecturerName,desireMark);
}
void payAfterGrad(){
	int pay;
	do{
		printf("Nhap vao luong sau khi ra truong: ");
		scanf("%d",&pay);
	}while(pay<=0);
	
		if(pay>25){
			printf("No luc het minh\n\n");
		}
		else if(pay>15){
			printf("Can co gang\n\n");
		}
		else if(pay>8){
			printf("Cham chi\n\n");
		}
		else{
			printf("Kho co nguoi yeu\n\n");
		}
}
void memberInfor(){
	int num;
	printf("Nhap so luong sinh vien: ");
	scanf("%d",&num);
	int weight[num];
	
	printf("Nhap can nang tung sinh vien: \n");
	for(int i=0;i<num;i++){
		printf("SV thu %d: ",i+1);
		scanf("%d",&weight[i]);
	}
	printf("So luong SV la: %d\n",num);
	
	int count = 0;
	for(int i=0;i<num;i++){
		if(weight[i]>50){
			count++;
		}
	}
	printf("So luong SV tren 50kg la: %d\n",count);
	

	int min = weight[0];
	for(int i=1;i<num;i++){
		if(min > weight[i]){
			min = weight[i];
		}
	}
	printf("Vi tri cua SV co can nang nho nhat la: ");
	for(int i=0;i<num;i++){
		if(min == weight[i]){
			printf("\t%d",i+1);
		}
	}
	printf("\nTrung binh can nang cac SV la: ");
	int  weightSum;
	float weightAver;
	
	for(int i=0;i<num;i++){
		weightSum += weight[i];
	}
	weightAver = weightSum/num;
	printf("%.1f\n",weightAver);
	
	printf("Vi tri SV dau tien co can nang chan: ");
	
	for(int i=0;i<num;i++){
		if(weight[i]%2==0){
				printf("%d\n\n",i+1);
				break;
		}
	}
}
