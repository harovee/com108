#include<stdio.h>
int main(){
	int soBuoiNghi;
	float diemTB;
	printf("Nhap vao so buoi nghi: ");
	scanf("%d",&soBuoiNghi);
	printf("Nhap vao diem TB: ");
	scanf("%f",&diemTB);
	printf("Ban co duoc di thi hay khong? %d",(soBuoiNghi<=3)&&(diemTB>=5));
	
}
