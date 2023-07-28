#include<stdio.h>
int main(){
	char dapAn;
	
	printf("Viet Nam co bao nhieu dan toc?");
	printf("\na. 52\nb. 53\nc. 54\nd. 55");
	printf("\nDap an cua ban la: ");
	scanf("%s",&dapAn);
	
	switch(dapAn){
		case 'a': printf("Dap an sai");
		break;
		case 'b': printf("Dap an sai");
		break;
		case 'c': printf("Dap an dung");
		break;
		case 'd': printf("Dap an sai");
		break;
		default:
			printf("Ban phai chon 1 trong 4 dap an tren");
	}
}
