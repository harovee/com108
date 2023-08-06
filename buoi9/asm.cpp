#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
struct fraction{
	int numer;
	int denomi;
};
struct student{
	char stuName[100];
	float mark;
};
void soNguyen();
void uocBoiChung();
void tienKara();
void tienDien();
void doiTien();
void tienLai();
void vayTien();
void sapXep();
void game();
void phanSo();

int main(){
	int chon;
	do{
		printf("_______________M-E-N-U__________________");
		printf("\n1. Kiem tra so nguyen");
		printf("\n2. Tim uoc chung va boi so chung cua 2 so");
		printf("\n3. Tinh tien cho quan Karaoke");
		printf("\n4. Tinh tien dien");
		printf("\n5. Chuc nang doi tien");
		printf("\n6. Tinh lai suat ngan hang vay tra gop");
		printf("\n7. Vay tien mua xe");
		printf("\n8. Sap xep thong tin sinh vien");
		printf("\n9. Game FPOLY-LOTT");
		printf("\n10. Tinh toan phan so");
		printf("\n0. Thoat!");
		printf("\n________________________________________ ");
		printf("\nXIN MOI CHON CHUC NANG: ");
		scanf("%d",&chon);
	
		switch(chon){
			case 1:{
				printf("\n\tKIEM TRA SO NGUYEN\n\n");
				soNguyen();
				break;
			}
			case 2:{
				printf("\n\tTIM UOC SO CHUNG VA BOI SO CHUNG CUA 2 SO\n\n");
				uocBoiChung();
				break;
			}
			case 3:{
				printf("\n\tTINH TIEN CHO QUAN KARAOKE\n\n");
				tienKara();
				break;
			}
			case 4:{
				printf("\n\tTINH TIEN DIEN\n\n");
				tienDien();
				break;
			}
			case 5:{
				printf("\n\tCHUC NANG DOI TIEN\n\n");
				doiTien();
				break;
			}
			case 6:{
				printf("\n\tTINH LAI SUAT NGAN HANG VAY TRA GOP\n\n");
				tienLai();
				break;
			}
			case 7:{
				printf("\n\tVAY TIEN MUA XE\n\n");
				vayTien();
				break;
			}
			case 8:{
				printf("\n\tSAP XEP THONG TIN SINH VIEN\n\n");
				sapXep();
				break;
			}
			case 9:{
				printf("\n\tGAME FPOLY-LOTT\n\n");
				game();
				break;
			}
			case 10:{
				printf("\n\tTINH TOAN PHAN SO\n\n");
				phanSo();
				break;
			}
			case 0:{
				printf("\n\tTAM BIET!");
				break;
			}
			default: printf("\n\tKHONG CO CHUC NANG NAY!\n\n");
		}
    }while(chon!=0);
}

void soNguyen(){
	float n;
	printf("Nhap so bat ky: ");
	scanf("%f",&n);
	
	if(n == int(n)){
		printf("%.1f la so nguyen\n",n);
		
		for(int i=2;i<n;i++){
	   		if(int (n)%i==0){
				printf("%.1f khong phai so nguyen to\n",n);
				break;
		    }
			else{
				printf("%.1f la so nguyen to\n",n);
				break;
			}
		}
		int count = 0;
		for(int i=0;i<n;i++){
			if(i*i==n){
				count++;
			}
		}
		if(count==0){
			printf("%.1f khong phai so chinh phuong\n\n",n);
		}
		else{
			printf("%.1f la so chinh phuong\n\n",n);
		}
	}
	else{
		printf("%.1f khong phai so nguyen\n",n);
		printf("%.1f khong phai so nguyen to\n",n);
		printf("%.1f khong phai so chinh phuong\n",n);
	}
}

void uocBoiChung(){
	int a, b, i, UC, BC;
	printf("Nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Nhap so thu hai: ");
	scanf("%d",&b);
	
   for( i=1; i<=a || i<=b ; i++ ){
	   if( a%i== 0 && b%i== 0 ){
	      UC = i;
	   }
   }
   printf("Uoc chung lon nhat cua 2 so la: %d\n",UC);
   BC = (a*b)/UC;
   printf("Boi chung nho nhat cua 2 so la: %d\n\n",BC);
}

void tienKara(){
	float hBatDau, hKetThuc, tongGio, Gia;

	printf("Nhap gio bat dau: ");
	scanf("%f",&hBatDau);
	while(hBatDau<12){
		printf("Nhap lai gio bat dau: ");
		scanf("%f",&hBatDau);
	}
	printf("Nhap gio ket thuc: ");
	scanf("%f",&hKetThuc);
	while(hKetThuc>23){
		printf("Nhap lai gio ket thuc: ");
		scanf("%f",&hKetThuc);
	}
	tongGio = hKetThuc - hBatDau;
	if(tongGio<=3){
		Gia = tongGio * 150000;
		if(14<=hBatDau && hBatDau<=17){
			Gia = Gia - Gia * 0.1;
		}
		printf("Cai gia phai tra: %.1f VND\n\n",Gia);
	}
	else{
		Gia = 3 * 150000 + (tongGio - 3)* 150000 * 0.7;
		if(14<=hBatDau && hBatDau<=17){
			Gia = Gia - Gia * 0.1;
		}
		printf("Cai gia phai tra: %.1f VND\n\n",Gia);
	}
}

void tienDien(){
	float kwh,Gia;
	float Bac1 = 1.678,Bac2 = 1.734,Bac3 = 2.014,Bac4 = 2.536,Bac5 = 2.834, Bac6 = 2.927;
	
	printf("Dien nang tieu thu thang nay la: ");
	scanf("%f",&kwh);
	
	if(kwh<=50){
		Gia = kwh*Bac1;
		printf("Tien dien phai dong la: %.3f\n\n",Gia);
	}
	else if(kwh<=100){
		Gia = 50*Bac1 + ((kwh - 50)*Bac2);
		printf("Tien dien phai dong la: %.3f\n\n",Gia);
	}
	else if(kwh<=200){
		Gia = 50*Bac1 + 50*Bac2 + ((kwh - 100)*Bac3);
		printf("Tien dien phai dong la: %.3f\n\n",Gia);
	}
	else if(kwh<=300){
		Gia = 50*Bac1 + 50*Bac2 + 100*Bac3 + ((kwh - 200)*Bac4);
		printf("Tien dien phai dong la: %.3f\n\n",Gia);
	}
	else if(kwh<=400){
		Gia = 50*Bac1 + 50*Bac2 + 100*Bac3 + 100*Bac4 + ((kwh - 300)*Bac5);
		printf("Tien dien phai dong la: %.3f\n\n",Gia);
	}
	else{
		Gia = 50*Bac1 + 50*Bac2 + 100*Bac3 + 100*Bac4 + 100*Bac5 + ((kwh-400)*Bac6);
		printf("Tien dien phai dong la: %.3f\n\n",Gia);
	}
}

void doiTien(){
	int soTien;
	printf("Nhap so tien can doi: ");
	scanf("%d",&soTien);
	
	int tien[9] = {500,200,100,50,20,10,5,2,1};
	
	printf("So tien doi duoc la: ");
	for(int i=0;i<9;i++){
		int count = 0;
		count += soTien/tien[i];
		
		if(count!=0){
			printf("\n%d to %d nghin VND\n",count,tien[i]);
		}
		
		soTien %= tien[i];
		
		if(soTien==0){
			break;
		}	
	}
}

void tienLai(){
	int tienVay;
	printf("Nhap so tien muon vay: ");
	scanf("%d",&tienVay);
	
	int gocThang = tienVay/12;
	
	printf("So tien phai tra tung thang la: \n");
	for(int i=1;i<=12;i++){
		int tienConLai = tienVay - gocThang*(i-1);
		int laiThang = tienConLai*0.05;
		int tienPhaiTra = gocThang + laiThang;
		printf("Thang %d: %d VND\n",i,tienPhaiTra);
	}
}

void vayTien(){
	float borrowPer;
	printf("Nhap vao so phan tram vay toi da: ");
	scanf("%f",&borrowPer);
	float money = 500 * (borrowPer/100);
	float firstMoney = 500 - money;
	printf("So tien phai tra truoc la: %.1f trieu VND\n", firstMoney);
	float mYear = money / 24;
	
	printf("SO TIEN PHAI TRA TUNG NAM: \n");
	for(int i=1 ; i <= 24 ; i++){
		float moneyLeft = money - mYear * (i-1);
		float yearInter = moneyLeft * 0.072;
		float yearPay = mYear + yearInter;
		printf("Nam thu %d: %.3f trieu VND\n\n", i, yearPay);
	}		
}

void sapXep(){
	int n;
	printf("Nhap so sinh vien: ");
	scanf("%d",&n);
	
	student stu[n];
	printf("NHAP THONG TIN SINH VIEN: \n");
	for(int i=0;i<n;i++){
		printf("Sinh vien thu %d:\n",i+1);
		fflush(stdin);
		printf("Ho va Ten: ");
		gets(stu[i].stuName);
		printf("Diem TB: ");
		scanf("%f",&stu[i].mark);
	}
	
	printf("--------------------------\n");
	for(int i=0;i<n;i++){
		printf(" \t%s - %.1f\n", stu[i].stuName, stu[i].mark);
		printf("\tHoc luc: ");
		if(stu[i].mark >= 9.0){
			printf("Xuat sac\n");
		}
		else if(stu[i].mark >= 8.0){
			printf("Gioi\n");
		}
		else if(stu[i].mark >= 6.5){
			printf("Kha\n");
		}
		else if(stu[i].mark >= 5.0){
			printf("Trung Binh\n");
		}
		else{
			printf("Yeu\n");
		}
	}
	printf("--------------------------\n");
	
	printf("Sap xep diem theo thu tu giam dan: \n");
	for(int i=0 ; i<n ; i++){
		for(int j=i+1 ; j<n ; j++){
			float temp;
			if(stu[i].mark < stu[j].mark){
				temp = stu[i].mark;
				stu[i].mark = stu[j].mark;
				stu[j].mark = temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%.1f\t",stu[i].mark);
	}
	printf("\n\n");
}

void game(){
	int a, b, randomNumber;
	printf("Nhap 2 so bat ky: \n");
		printf("So thu nhat: ");
	    scanf("%d",&a);
	    while(a>15 || a<1){
	    	printf("Nhap lai so thu nhat: ");
	    	scanf("%d",&a);
		}
	    printf("So thu hai: ");
	    scanf("%d",&b);
	    while(b>15 || b<1){
	    	printf("Nhap lai so thu hai: ");
	    	scanf("%d",&b);
		}
		
	    srand(time(0));
	    int count = 0;
	    printf("SO TRUNG THUONG: \n");
	    printf("----------------------\n");
	    for(int i = 0; i < 5; i++){
	    	randomNumber = rand() % 15+1;
	    	printf("%5d",randomNumber);
	    	if(a == randomNumber || b == randomNumber){
	    		count++;
			}
		}
		printf("\n---------------------\n");
		if(count == 0){
			printf("Chuc ban may man lan sau\n");
		}
		else if(count == 1){
			printf("Chuc mung ban da trung giai Nhi\n");
		}
		else{
			printf("Chuc mung ban da trung giai Nhat\n");
		}
}

void phanSo(){
	printf("Nhap 2 phan so: \n");
	fraction frac[2];
	for(int i=1 ; i<=2 ; i++){
		printf("Tu so phan so thu %d: ",i);
		scanf("%d",&frac[i].numer);
		printf("Mau so phan so thu %d: ",i);
		scanf("%d",&frac[i].denomi);
	}
	printf("Ta co 2 phan so la: \n");
	for(int i=1 ; i<=2 ; i++){
		printf("\t%d/%d\t",frac[i].numer, frac[i].denomi);
	}
	
	fraction sum = {frac[1].numer * frac[2].denomi + frac[2].numer * frac[1].denomi, frac[1].denomi * frac[2].denomi};
	fraction diff = {frac[1].numer * frac[2].denomi - frac[2].numer * frac[1].denomi, frac[1].denomi * frac[2].denomi};
	fraction prod = {frac[1].numer * frac[2].numer, frac[1].denomi * frac[2].denomi};
	fraction quot = {frac[1].numer * frac[2].denomi, frac[1].denomi * frac[2].numer};
	printf("\nTong 2 phan so la: %d/%d\n",sum.numer, sum.denomi);
	printf("Hieu 2 phan so la: %d/%d\n",diff.numer, diff.denomi);
	printf("Tich 2 phan so la: %d/%d\n",prod.numer, prod.denomi);
	printf("Thuong 2 phan so la: %d/%d\n\n",quot.numer, quot.denomi);
}
