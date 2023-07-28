#include<stdio.h>
int main(){
	
	int chon;
	printf("----M-E-N-U----");
	printf("\n1. Tim kiem nguoi yeu");
	printf("\n2. Kiem tra so");
	printf("\n------------------");
	printf("\nXin moi chon chuc nang: ");
	scanf("%d",&chon);
	
	switch(chon){
		case 1:{
			printf("Tim kiem nguoi yeu");
			
			int tuoi;
			printf("\nNhap vao tuoi cua nguoi yeu: ");
			scanf("%d",&tuoi);
			
			if(tuoi>30){
				printf("Khong tim thay ai %d tuoi ma phu hop voi ban",tuoi);
			}
			else if(tuoi>=25){
				printf("Tim thay 5 nguoi co %d tuoi phu hop voi ban",tuoi);
			}
			else if(tuoi>=18){
				printf("Tim thay 15 nguoi co %d tuoi phu hop voi ban",tuoi);
			}
			else if(tuoi>=16){
				printf("Tim thay 2 nguoi co %d tuoi phu hop voi ban.\nNhung tot nhat khong nen yeu",tuoi);
			}
			else{
				printf("Chung toi khong the cung cap thong tin gay nguy hai");
			}
			break;
		}
		case 2:{
			printf("Kiem tra so");
			
			int a,b,c;
			printf("Xin moi nhap 2 so a,b: ");
			printf("\na = ");
			scanf("%d",&a);
			printf("\nb = ");
			scanf("%d",&b);
			if(a<b){
				printf("\nSo be la: %d",a);
				c = a/5;
				if(a%5==0){
					printf("\nSau khi chia 5 ta duoc c = %d",c);	
				}
				else{
					printf("\nSo do khong chia het cho 5");
				}
			}
			else{
				printf("\nSo be la: %d",b);
				c = b/5;
				if(b%5==0){
					printf("\nSau khi chia 5 ta duoc c = %d",c);
				}
				else{
					printf("\nSo do khong chia het cho 5");
				}
			}
			
			break;
		}
		default: printf("Khong co chuc nang nay");
	}
}
