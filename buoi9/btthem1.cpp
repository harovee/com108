#include<stdio.h>
#include<math.h>
int main(){
	int chon;
	do{
		printf("____MENU____\n");
		printf("1. Day so\n");
		printf("2. So nguyen to\n");
		printf("3. Giai PT bac 2\n");
		printf("0.Thoat\n");
		printf("__________________\n");
		printf("Xin moi chon CN: ");
		scanf("%d",&chon);
		
		switch(chon){
			case 1:{
				printf("1. Day so\n");
				int n,i;
				int tong = 0;
				printf("Nhap gia tri cua n: ");
				scanf("%d",&n);
				
				for(i=1;i<=n;i++){
					if(i%3==0){
				    	printf("%d la so chia het cho 3\n",i);
						tong+=i;
					}
				}
				printf("Tong = %d\n\n",tong);
				break;
			}
			case 2:{
				printf("2. So nguyen to\n");
				int a, count = 0;
				printf("Nhap so nguyen a(a>5) = ");
				scanf("%d",&a);
				
				for(int i=2;i<a;i++){
					if(a%i==0){
						count++;
						break;
					}
				}
				if(count==0){
					printf("%d la so nguyen to\n\n",a);
				}
				else{
					printf("%d khong phai so nguyen to\n\n",a);
				}
				break;
			}
			case 3:{
				printf("3. Giai PT bac 2\n");
				int a,b,c;
				float delta;
				printf("Nhap vao gia tri a,b,c: \n");
				printf("a = ");
				scanf("%d",&a);
				while(a==0){
					printf("Nhap lai gia tri a:");
					a++;
					printf("a = ");
				    scanf("%d",&a);
				}
				printf("b = ");
				scanf("%d",&b);
				printf("c = ");
				scanf("%d",&c);
				
				if (a==0){
					printf("\nPhuong trinh tro thanh phuong trinh bac 1 co dang la: %d*x + %d = 0",b,c);
					if(b==0){
						printf("\nPhuong trinh co vo so nghiem\n\n");
					}
					else{
						printf("\nPhuong trinh vo nghiem\n\n");
					}
				}
				else{
					delta = b^2 - 4*a*c;
					printf("\ndelta = %.1f",delta);
					if(delta==0){
						printf("\nPhuong trinh co nghiem kep la x = (-%.1f)/2*%.1f\n\n",b,a);
					}
				    else{
				    	if(delta<0){
						printf("\nPhuong trinh vo nghiem\n\n");
					}
					    else{
						float x1,x2;
						x1 = ((-b) + sqrt(delta))/(2*a);
						x2 = ((-b) - sqrt(delta))/(2*a);
						printf("\nPhuong trinh co 2 nghiem rieng biet la:");
						printf("\nX1 = %.1f",x1);
						printf("\nX2 = %.1f\n\n",x2);
					    }
				    }
			    }
				break;
			}
			case 0:{
				printf("Tam biet");
				break;
			}
			default: printf("Khong co chuc nang nay\n\n");
		}
	}while(chon!=0);
}
