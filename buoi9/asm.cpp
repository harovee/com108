#include<stdio.h>
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
				printf("1.Kiem tra so nguyen\n\n");
				soNguyen();
				break;
			}
			case 2:{
				printf("2.Tim uoc chung va boi so chung cua 2 so\n\n");
				uocBoiChung();
				break;
			}
			case 3:{
				printf("3.Tinh tien cho quan Karaoke\n\n");
				tienKara();
				break;
			}
			case 4:{
				printf("4.Tinh tien dien\n\n");
				tienDien();
				break;
			}
			case 5:{
				printf("5.Chuc nang doi tien\n\n");
				doiTien();
				break;
			}
			case 6:{
				printf("6.Tinh lai suat ngan hang vay tra gop\n\n");
				tienLai();
				break;
			}
			case 7:{
				printf("7.Vay tien mua xe\n\n");
				break;
			}
			case 8:{
				printf("8.Sap xep thong tin sinh vien\n\n");
				break;
			}
			case 9:{
				printf("9.Game FPOLY-LOTT\n\n");
				break;
			}
			case 10:{
				printf("10.Tinh toan phan so\n\n");
				break;
			}
			case 0:{
				printf("Thoat!");
				break;
			}
			default: printf("Khong co chuc nang nay!\n\n");
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
		if(14<=hBatDau<=17){
			Gia = Gia - Gia * 0.1;
		}
		printf("Cai gia phai tra: %.1f VND\n\n",Gia);
	}
	else{
		Gia = 3 * 150000 + (tongGio - 3)* 150000 * 0.7;
		if(14<=hBatDau<=17){
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
	double value = tienPhaiTra;
	MessageBox.Show(string.Format(new CultureInfo("vi-VN"), "{0:#,##0.00}", value));
}
void vayTien(){
}
void sapXep(){
}
void game(){
}
void phanSo(){
}

