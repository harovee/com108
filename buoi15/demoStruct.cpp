#include<stdio.h>
struct student{
	char stuID[50];
	char stuName[100];
	float averMark;
};
int main(){
	student stu1;
	printf("Nhap ma SV: ");
	gets(stu1.stuID);
	printf("Nhap ten SV: ");
	gets(stu1.stuName);
	printf("Nhap diem TB: ");
	scanf("%f",&stu1.averMark);
	
	printf("%s\t%s\t%.1f",stu1.stuID,stu1.stuName,stu1.averMark);
}
