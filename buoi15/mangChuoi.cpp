#include<stdio.h>
#include<string.h>
struct student{
	char stuID[50];
	char stuName[100];
	float averMark;
};
int main(){
	int n;
	printf("Nhap so SV: ");
	scanf("%d",&n);
	
	student stu[n];
	printf("Nhap thong tin SV: \n");
	for(int i=0;i<n;i++){
		fflush(stdin);
		printf("Nhap ma so SV: ");
		gets(stu[i].stuID);
		printf("Nhap ten SV: ");
		gets(stu[i].stuName);
		printf("Nhap diem TB: ");
		scanf("%f",&stu[i].averMark);
	}
	for(int i=0; i<n; i++){
		printf("%s - %s - %.1f\n",stu[i].stuID, stu[i].stuName, stu[i].averMark);
	}
}
