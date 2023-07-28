#include<stdio.h>
int main(){
	int i,tong;
	for(i=3,tong=0;i<=6;tong+=i,i++);
	printf("%d",tong);
}
