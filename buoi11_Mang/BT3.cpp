#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao so nguoi cho ban tien: ");
	scanf("%d",&n);
	
	int a[n];
	for(int i=0;i<n;i++){
	printf("Nguoi %d cho ban: ",i+1);
	scanf("%d",&a[i]);
    }
    
    int tong=0;
    for(int i=0;i<n;i++){
    	tong+=a[i];
	}
	printf("Tong tien thu duoc: %d\n\n",tong);
	int max = a[0];
	for(int i=1;i<n;i++){
		if(max<a[i]){
			max = a[i];
		}
	}
	printf("So tien lon nhat ban nhan dc la: %d\n",max);
}
