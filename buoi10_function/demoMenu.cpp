#include<stdio.h>
void tinhTong();
void inSoChan();

int main(){
	int chon;
	do{
		printf("___MENU___\n");
		printf("1.Tinh tong\n");
		printf("2.In so chan\n");
		printf("3.Thoat\n");
		printf("___________\n");
		printf("Moi ban chon chuc nang: \n");
		scanf("%d",&chon);
		
		switch(chon){
			case 1:{
				printf("1.Tinh tong\n");
				break;
			}
			case 2:{
				printf("2.In so chan\n");
				int n,i;
				printf("Nhap n: ");
				scanf("%d",&n);
				
			    for(i=0;i<=n;i++){
			    	if(i%2==0){
			    		printf("%d\n",i);
					}
				}	
				break;
			}
			case 3:{
				printf("3.Thoat\n");
				break;
			}
			default: printf("Khong co chuc nang nay");
		}
	}while(chon!=0);
}

void tinhTong(){
}

void inSoChan(){
}
