#include<stdio.h>
int main(){
	char lap;
	
	printf("Cua hang co 5 loai laptop sau: ");
	printf("\n1. Dell\n2. HP\n3. Asus\n4. MSI\n5. Acer");
	printf("\nNguoi dung da mua may tinh nao: ");
	scanf("%s",&lap);
	
	switch(lap){
		case 1: printf("Nguoi dung da mua may Dell");
		break;
		case 2: printf("Nguoi dung da mua may HP");
		break;
		case 3: printf("Nguoi dung da mua may Asus");
		break;
		case 4: printf("Nguoi dung da mua may MSI");
		break;
		case 5: printf("Nguoi dung da mua may Acer");
		break;
		
		default :
			printf("Cua hang khong co loai may nay");
	}
}
