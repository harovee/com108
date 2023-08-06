#include<stdio.h>
#include<string.h>
int main(){
	char a[] = "A";
	char a1[] = "a";
	char b[] = "B";
	char c[] = "B";
	
	printf("Chuoi a < a1: %d\n",strcmp(a,a1));
	printf("chuoi a < b: %d\n",strcmp(a,b));
	printf("chuoi b > a: %d\n",strcmp(b,a));
	printf("chuoi b = c: %d\n",strcmp(b,c));
	
	char str[] = "AbC";
	printf("Chuoi dao nguoc: %s\n",strrev(str));
	printf("Chuoi chu thuong: %s\n",strlwr(str));
	printf("chuoi chu hoa: %s\n",strupr(str));
	printf("tim chuoi con \"a\": %d\n",strstr(str,"a"));
}
