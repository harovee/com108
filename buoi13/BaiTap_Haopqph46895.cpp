#include<stdio.h>
#include<string.h>

void thongTin();
void phanLoai();
void mang();

int main(){
	int chon;
	do{
		printf("+_________M-E-N-U________+");
		printf("\n1. Thong tin ve NYC");
		printf("\n2. Phan loai");
		printf("\n3. Mang NYC");
		printf("\n4. Thoat!");
		printf("\n+_____________________+ ");
		printf("\nMoi chon: ");
		scanf("%d",&chon);
		
		switch(chon){
			case 1:{
				printf("THONG TIN NYC\n");
				thongTin();
				break;
			}
			case 2:{
				printf("PHAN LOAI\n");
				phanLoai();
				break;
			}
			case 3:{
				printf("MANG NYC\n");
				mang();
				break;
			}
			default: printf("KHONG CO CHUC NANG NAY\n\n");
		}
	}while(chon!=4);
}

void thongTin(){
	char hoTen[100];
	float canNang, chieuCao;
	
	printf("Nhap thong tin NYC: \n");
	
	fflush(stdin);
			
	printf("Ho va ten: ");
	gets(hoTen);

	printf("Can nang: ");
	scanf("%f",&canNang);
		
	printf("Chieu cao: ");
	scanf("%f",&chieuCao);
	
	printf("Thong tin NYC: \n");
	printf("Ho ten: %s\nCan nang: %.1f\nChieu cao: %.1f\n\n",hoTen,canNang,chieuCao);
	
}
void phanLoai(){
	int tuoi;
	do{
		printf("Nhap tuoi cua NY: ");
		scanf("%d",&tuoi);
	}while(tuoi<=15);
	
	if(tuoi>30){
		printf("Ban la phi cong gioi\n\n");
	}
	else if(tuoi>24){
		printf("Nuoi duoc minh hoc lai\n\n");
	}
	else if(tuoi>=18){
		printf("Du tuoi chiu trach nhiem\n\n");
	}
	else{
		printf("Vo cung can than neu khong di tu`\n\n");
	}
}
void mang(){
	int n;
	printf("+----Thong tin NYC----+\n");
	printf("Moi nhap so luong NYC: ");
	scanf("%d",&n);
	
	float can[n];
	printf("Moi nhap can nang cua nhung NYC: \n");
	for(int i=0;i<n;i++){
		printf("Nguoi thu %d: ",i+1);
		scanf("%f",&can[i]);
	}
	printf("+----Xuat thong tin----+\n");
	printf("So luong NYC la: %d\n",n);
	printf("NYC can nang 60kg tro len: ");
	
	int count=0;
	float min = can[0];
	for(int i=0;i<n;i++){
		if(can[i]>=60){
			count++;
		}
	}
	printf("%d\n",count);
	
	for(int i=0;i<n;i++){
		if(min>can[i]){
			min = can[i];
		}
	}
	printf("NYC gay nhat la: %.1f\n",min);
	
	float hoanVi;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(can[i]>can[j]){
				hoanVi = can[i];
				can[i] = can[j];
				can[j] = can[i];
			}
		}
	}
	printf("Sap xep can nang theo chieu tang dan: ");
	for(int i=0;i<n;i++){
		printf("\t %.1f\n\n",can[i]);
	}
}
