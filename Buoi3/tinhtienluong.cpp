#include<stdio.h>;
int main(){
	int ngayCong,luongNgay,luongTruocThue,thueTN,luongSauThue;
	float pTThue;
	
	printf("Nhap vao ngay cong: ");
	scanf("%d",&ngayCong);
	printf("Nhap vao luong ngay: ");
	scanf("%d",&luongNgay);
	printf("Nhap vao phan tram thue: ");
	scanf("%f",&pTThue);
	
	luongTruocThue = ngayCong*luongNgay;
	thueTN = luongTruocThue*pTThue;
	luongSauThue = luongTruocThue - thueTN;
	
	printf("Luong nhan vien nhan duoc thang nay la: %d ",luongSauThue);
	printf("\nVoi thue thu nhap da tru la: %d",thueTN);
}
