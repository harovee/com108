#include<stdio.h>
int main(){
	int chon;
	do{
		printf("\n\n-----M-E-N-U-----\n");
		printf("1.aaaaaaaaaaaaaa\n");
		printf("2.bbbbbbbbbbbbbb\n");
		printf("3.cccccccccccccc\n");
		printf("0.Thoat\n");
		printf("----------------\n");
		
		printf("Moi ban chon chuc nang: ");
		scanf("%d",&chon);
		
		switch(chon){
			case 1:{
				printf("aaaa\n");
				break;
			}
			case 2:{
				printf("bbbb\n");
				break;
			}
			case 3:{
				printf("cccc\n");
				break;
			}
			case 0:{
				printf("Thoat");
				break;
			}
			default:
				printf("Khong co CN nay\n");
		}
	}while(chon!=0);
}
