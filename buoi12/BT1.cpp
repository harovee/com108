#include<stdio.h>
void soNguyen();
void traSua();

int main(){
	int chon;
	do{
		printf("-----MENU-----\n");
		printf("1. So Nguyen\n");
		printf("2. Tra Sua\n");
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
				printf("TRA SUA\n");
				traSua();
				break;
			}
			case 3:{
				printf("Thoat");
				break;
			}
			default: printf("Khong co chuc nang nay\n\n");
		}
    }while(chon!=3);
}

void soNguyen(){
		int n, tong = 0, check;
		printf("Nhap vao so nguyen n: ");
		scanf("%d",&n);
		for(int i=2;i<=n;i++){
		    check=1;
			for(int j=2;j<i;j++){
				if(i%j==0){
					check = 0;
					break;
				}
			}
			if(check==1){
				tong+=i;
			}
		}
		printf("Tong cac so nguyen to tu 1 den n la: %d\n\n",tong);
}
void traSua(){
	int n;
	printf("So loai tra sua cua quan la: \n");
	scanf("%d",&n);
	int traSua[n];
	printf("Gia thanh moi loai tra sua la: \n");
	for(int i=0;i<n;i++){
		printf("Gia tra sua thu %d: ",i+1);
		scanf("%d",&traSua[n]);
	}
	printf("++++++++++++++++\n");
	printf("Cua hang ban %d loai tra sua\n",n);
	
	int count=0;
	for(int i=0;i<n;i++){
		if(traSua[i]>20){
			count++;
		}
	}
	printf("Co %d loai tra sua tren 20k\n\n",count);
}
