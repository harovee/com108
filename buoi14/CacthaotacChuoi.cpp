#include<stdio.h>
#include<string.h>
int main(){
	char a[] = "Nguyen Van A";
	char copy[strlen(a)];
	
	printf("In: %s\n",a);
	printf("Do dai chuoi: %d\n",strlen(a));
	
	strcpy(copy,a);
	printf("Copy chuoi a vao copy: %s\n",copy);
	
	strcat(a,copy);
	printf("Noi b vao a: %s",a);
}
