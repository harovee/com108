#include<stdio.h>
#include<string.h>

int main(){
	int student;
	float mark[student];
	char name[100][100];
	
	printf("So SV: ");
	scanf("%d",&student);
	
	for(int i=0;i<student;i++){
		fflush(stdin);
		printf("Nhap ten SV: ");
		gets(name[i]);
		printf("Nhap diem SV: ");
		scanf("%f",&mark[i]);
	}
	
	for(int i=0;i<student;i++){
		printf("Ho ten: %s\t",name[i]);
		printf("Diem: %.1f\n", mark[i]);
	}
}
