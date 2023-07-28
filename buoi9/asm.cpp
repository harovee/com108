#include<stdio.h>
int main(){
	int chon;
	do{
		printf("_______________M-E-N-U__________________");
		printf("\n1. Kiem tra so nguyen");
		printf("\n2. Tim uoc chung va boi so chung cua 2 so");
		printf("\n3. Tinh tien cho quan Karaoke");
		printf("\n4. Tinh tien dien");
		printf("\n5. Chuc nang doi tien");
		printf("\n6. Tinh lai suat ngan hang vay tra gop");
		printf("\n7. Vay tien mua xe");
		printf("\n8. Sap xep thong tin sinh vien");
		printf("\n9. Game FPOLY-LOTT");
		printf("\n10. Tinh toan phan so");
		printf("\n0. Thoat!");
		printf("\n________________________________________ ");
		printf("\nXIN MOI CHON CHUC NANG: ");
		scanf("%d",&chon);
	
	switch(chon){
		case 1:{
			printf("1.Kiem tra so nguyen\n\n");
			break;
		}
		case 2:{
			printf("2.Tim uoc chung va boi so chung cua 2 so\n\n");
			break;
		}
		case 3:{
			printf("3.Tinh tien cho quan karaoke\n\n");
			break;
		}
		case 4:{
			printf("4.Tinh tien dien\n\n");
			break;
		}
		case 5:{
			printf("5.Chuc nang doi tien\n\n");
			break;
		}
		case 6:{
			printf("6.Tinh lai suat ngan hang vay tra gop\n\n");
			break;
		}
		case 7:{
			printf("7.Vay tien mua xe\n\n");
			break;
		}
		case 8:{
			printf("8.Sap xep thong tin sinh vien\n\n");
			break;
		}
		case 9:{
			printf("9.Game FPOLY-LOTT\n\n");
			break;
		}
		case 10:{
			printf("10.Tinh toan phan so\n\n");
			break;
		}
		case 0:{
			printf("Thoat!");
			break;
		}
		default: printf("Khong co chuc nang nay!\n\n");
	}
    }while(chon!=0);
}

