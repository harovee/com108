#include<stdio.h>
int main(){
	int a =8;
	int b = 4;
	int c = 3;
	int hieu = a - b;
	printf("a + b = %d",(a+b));
	printf ("\n a - b = %d",hieu);
	printf("\n a * b = %d",(a*b));
	printf("\n Chia lay so du: a %% b = %d",(a%c));// nhâp 2 %% de hien %
	printf("\n a++ = %d",(a++));// a them 1 sau phep tinh
	printf("\n a = %d",a);//a sau phep tinh = 9
	printf("\n ++b = %d",(++b));//b dc them 1 ngay lap tuc
	printf("\n a-- = %d",(a--));//a se tru 1 sau phep tinh
	printf("\n a = %d",a);//a dc tru 1 con 8
	printf("\n --b = %d",(--b));// b  tru di 1 ngay lap tuc
}
