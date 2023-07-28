#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	float delta,x1,x2;
	
	printf("Nhap vao so a: ");
	scanf("%d",&a);
	printf("Nhap vao so b: ");
	scanf("%d",&b);
	printf("Nhap vao so c: ");
	scanf("%d",&c);
	
	printf("Phuong trinh co dang la: %d*x^2 + %d*x + %d = 0",a,b,c);
	if(a==0){
		if(b==0){
			if(c==0){
			printf("\nPhuong trinh co vo so nghiem");
		    }
		    else{
			printf("\nPhuong trinh vo nghiem");
		    }
	    }
	   else{
	   	printf("\nPhuong trinh co nghiem la x = (-%d)/(%d)",c,b);
	   }
    }
    else{
    	delta = b^2 - 4*a*c;
		printf("\ndelta = %.1f",delta);
		if(delta==0){
			printf("\nPhuong trinh co nghiem kep la x = (-%.1f)/2*%.1f",b,a);
		}
		else if(delta<0){
			printf("Phuong trinh vo nghiem");
		}
		else{
			x1 = ((-b) + sqrt(delta))/(2*a);
			x2 = ((-b) - sqrt(delta))/(2*a);
			printf("\nPhuong trinh co 2 nghiem rieng biet la:");
			printf("\nX1 = %.1f",x1);
			printf("\nX2 = %.1f",x2);
		}
	}
}
