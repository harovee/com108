#include<stdio.h>
int main(){
	int chon;
	do{
		printf("____MENU____\n");
		printf("1. Day so\n");
		printf("2. So chinh phuong\n");
		printf("0.Thoat\n");
		printf("__________________\n");
		printf("Xin moi chon CN: ");
		scanf("%d",&chon);
		
		switch(chon){
			case 1:{
				printf("1. Day so\n");
				int n,bPhuong, tong = 0;
				printf("Nhap gia tri n(n>33): ");
				scanf("%d",&n);
				
				for(int i=6;i<=n;i++){
					if(i%5==0){
						printf("%d\n",i);
						bPhuong = i*i;
						tong+=bPhuong;
					}
				}
				printf("Tong BP = %d\n\n",tong);
				
				break;
			}
			case 2:{
				printf("2. So chinh phuong\n");
				int x;
				printf("Nhap so duong x: ");
				scanf("%d",&x);
				while(x<=0){
					printf("Nhap lai x: ");
				    scanf("%d",&x);
				}
				if(x>8){
					int i, count = 0;
					for(i=0;i*i<=x;i++){
						if(i*i==x){
							printf("%d la so chinh phuong\n\n",x);
							count++;
						}
					}
					if(count==0){
						printf("%d khong phai so chinh phuong\n\n",x);
					}
				}
				else{
					printf("So tren nho hon 8");
				}
				break;
			}
			case 0:{
				printf("Tam biet\n");
				break;
			}
			default: printf("Khong co chuc nang nay\n\n");
		}
	}while(chon!=0);
}
