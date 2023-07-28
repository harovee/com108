#include<stdio.h>
int main(){
	int chon;
	do{
		printf("____MENU____\n");
		printf("1.Trung binh tong cac so chan\n");
		printf("2.KT so nguyen to\n");
		printf("3.KT so chinh phuong\n");
		printf("4.Thoat\n");
		printf("__________________\n");
		printf("Xin moi chon CN: ");
		scanf("%d",&chon);
		
		switch(chon){
			case 1:{
				printf("Tinh TB tong cac so chan\n\n");
				
				int i, min, max, tong=0, count=0, hVi;
				float tBinh;
				printf("Nhap gia tri min, max: ");
				printf("\nmin = ");
				scanf("%d",&min);
				printf("\nmax = ");
				scanf("%d",&max);
				
				if(max<min){
					hVi = max;
					max = min;
					min = hVi;
					printf("max = %d",max);
					printf("\nmin = %d\n",min);
			    }
			    else{
					printf("max = %d",max);
					printf("\nmin = %d\n",min);
			    }
			    for(i=min;i<=max;i++){
			    	if(i%2==0){
			    		tong+=i;
			    		count++;
					}
					tBinh = tong/count;
	                printf("Trung binh tong cua so tu nhien chia het cho 2 tu min toi max la: %.1f\n\n",tBinh);
				}
				break;
			}
			case 2: {
				printf("KT so nguyen to\n\n");
				break;
			}
			case 3:{
				printf("KT so chinh phuong\n\n");
				break;
			}
			case 4:{
				printf("THOAT");
				break;
			}
			default: printf("Khong co CN nay\n\n");
		}
		
	}while(chon!=4);
}
