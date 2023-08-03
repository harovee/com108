#include<stdio.h>
int timMax(){
	int a,b,c,max;
	printf("Xin moi nhap gia tri a,b,c: ");
	printf("\na = ");
	scanf("%d",&a);
	printf("\nb = ");
	scanf("%d",&b);
	printf("\nc = ");
	scanf("%d",&c);
	
	if(a>b){
		if(a>c){
			max = a;
			printf("So lon nhat la %d\n\n",max);
		}
		else{
			max = c;
			printf("So lon nhat la %d\n\n",max);
		}
	}
	else{
		if(b<c){
			max = c;
			printf("So lon nhat la %d\n\n",max);
		}
		else{
			max = b;
			printf("So lon nhat la %d\n\n",max);
		}
	}
	return max;
}
int namNhuan(){
	int nam,flag;
	printf("\nXin moi nhap vao Nam ban muon kiem tra: ");
	scanf("%d",&nam);
	
	if(nam%400==0){
		flag = 1;	
	}
	else if(nam%4==0&&nam%100!=0){
		flag = 1;
	}
	else{
		flag = 0;
	}
	return flag;
}
int hoanVi(){
	int a,b,hVi;
	printf("Nhap gia tri a va b: \n");
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	
	hVi = a;
	a = b;
	b = hVi;
	printf("\nSau khi hoan vi ta duoc: \na = %d\nb = %d\n\n",a,b);
}


int main(){
	int chon;
	do{
		printf("___MENU___\n");
		printf("1.Tim Gia Tri Lon Nhat\n");
		printf("2.Tinh Nam Nhuan\n");
		printf("3.Hoan Vi\n");
		printf("4.Thoat\n");
		printf("______________\n");
		printf("Moi ban chon chuc nang: \n");
		scanf("%d",&chon);
		
		switch(chon){
			case 1:{
				printf("Tim gia tri lon nhat\n");
			    timMax();
				break;
			}
			case 2:{
				printf("Tinh nam nhuan");
				if(namNhuan()==1){
					printf("Day la nam nhuan\n\n");
				}
				else{
					printf("Day khong phai nam nhuan\n\n");
				}
				break;
			}
			case 3:{
				printf("Hoan vi\n");
				hoanVi();
				break;
			}
			case 0:{
				printf("Tam biet");
				break;
			}
			default: printf("Khong co chuc nang nay");
		}
	}while(chon!=0);
}

