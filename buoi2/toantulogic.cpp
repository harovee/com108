#include<stdio.h>
int main(){
	int a = 5;
	int b = -5;
	printf("a = %d",a);
	printf("\nb = %d",b);
	printf("\na>0 va b>0: %d",(a>0)&&(b>0));
	printf("\n a>0 hoac b>0: %d",(a>0)||(b>0));
	printf("\n phu dinh cua b>0: %d",(!(b>0)));
	
}
