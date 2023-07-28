#include<stdio.h>
int main(){
	int min,max;
	
	printf("Nhap gia tri min, max: ");
	printf("\nmin = ");
	scanf("%d",&min);
	printf("\nmax = ");
	scanf("%d",&max);
	
	int i = min;
	float tong = 0, count = 0, tBinh;
	
	while(i<=max){
		if(i%2==0){
		tong+=i;
		count++;
	    }
		i++;   
	}
	tBinh = tong/count;
	printf("Trung binh tong cua so tu nhien chia het cho 2 tu min toi max la: %.1f",tBinh);
}
