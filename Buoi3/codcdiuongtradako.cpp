#include<stdio.h>
int main(){
	int banCo,banCuaBanCo;
	printf("So tien ban co: ");
	scanf("%d",&banCo);
	printf("So tien ban cua ban co: ");
	scanf("%d",&banCuaBanCo);
	printf("Co duoc di uong tra da khong? %d",banCo>=10||banCuaBanCo>=10);
}
