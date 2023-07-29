#include<stdio.h>	
int main(){
    int chon;
		do{
			printf("______________MENU_________________\n");
			printf("1.Tinh TB tong so chia het cho 3 trong mang\n");
			printf("2.In Max va Min\n");
			printf("3.Sap xep theo thu tu giam dan\n");
			printf("4.Tinh binh phuong cac ptu trong mang 2 chieu\n");
			printf("___________________________________________\n");
			printf("Moi ban chon chuc nang: ");
			scanf("%d",&chon);
			
			switch(chon){
				case 1:{
					printf("Tinh TB tong so chia het cho 3 trong mang\n");
					int n;
						printf("Nhap so phan tu cua mang: ");
						scanf("%d",&n);
						
						int a[n];
						for(int i=0;i<n;i++){
							printf("Gia tri cua ptu thu %d trong mang: ",i+1);
							scanf("%d",&a[i]);
					    }
					    int count = 0;
					    float tBinh, tong = 0;
					    for(int i=0;i<n;i++){
					    	if(a[i]%3==0){
					    		tong+=a[i];
					    		count++;
							}
						}
						tBinh = tong/count;
						printf("TB tong cac so chia het cho 3 la %.1f\n",tBinh);
					break;
				}
				case 2:{
					printf("In Max va Min\n");
				    	int n;
						printf("Nhap so phan tu cua mang: ");
						scanf("%d",&n);
						
						int a[n];
						for(int i=0;i<n;i++){
							printf("Gia tri cua ptu thu %d trong mang: \n",i+1);
							scanf("%d",&a[i]);
					    }
						int min = a[0],max = a[n-1];
						for(int i=1;i<n;i++){
							if(min>a[i]){
								min = a[i];
							}
						}
						printf("Gia tri nho nhat la: %d\n",min);
						
						for(int i=0;i<n;i++){
							if(max<a[i]){
								max = a[i];
							}
						}
						printf("Gia tri lon nhat la %d\n",max);
					break;
				}
				case 3:{
					printf("Sap xep theo thu tu giam dan\n");
					int n;
						printf("Nhap so phan tu cua mang: ");
						scanf("%d",&n);
						
						int a[n],hVi;
						for(int i=0;i<n;i++){
							printf("Gia tri cua ptu thu %d trong mang: \n",i+1);
							scanf("%d",&a[i]);
					    }
					    for(int i=0;i<n;i++){
					    	for(int j=0;j<n;j++){
					    		if(a[i]>a[j]){
					    		
								hVi = a[i];
								a[i] = a[j];
								a[j] = hVi;
								}
							}
						}
						for(int i=0;i<n;i++){
							printf("Vi tri thu %d trong mang la %d\n",i+1,a[i]);
						}
					break;
				}
				case 4:{
					printf("Tinh binh phuong cac ptu trong mang 2 chieu\n");
					break;
				}
				case 0:{
					printf("Thoat.");
					break;
				}
	
				default: printf("Khong co chuc nang nay");
			}
		 }while(chon!=0);
    }

