#include<stdio.h>
#define PI 3.14
int main(){
	float banKinh,chuVi,dienTich;
	printf("Nhap ban kinh cua duong tron: ");
	scanf("%f",&banKinh);
	chuVi = PI*banKinh*2;
	dienTich = PI*banKinh*banKinh;
	printf("chu vi duong tron la C = %.2f",chuVi);
	printf("\ndien tich duong tron la S = %.2f",dienTich);
}
//cach 2
// #include<stdio.h>
//#include<math.h>
//int main(){
//float r, cVi, dTich;
//printf("Nhap vao ban kinh: ");
//scanf("%f",&r);
//cVi = r*2*3.14;
//dTich = pow(r,2)*3.14;        - tinh so mu r^2
//printf("chu vi, dtich");
//}
