//chuong trinh giai phuong trinh bac hai ax^2 + bx+ c =0 voi a b c bat ky
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float a,b,c;

	printf("\ngiai phuong trinh bac hai \nax^2 + bx + c = 0 \nvoi 3 so a b c bat ky:\n");
	
	printf("\nnhap so a: ");
	scanf("%f",&a);
	
	printf("\nnhap so b: ");
	scanf("%f",&b);
	
	printf("\nnhap so c: ");
	scanf("%f",&c);
	
	if(a==0){
		if(b==0){
			if(c==0){
				printf("\nphuong trinh co vo so nghiem\n");
			}else{
				printf("\nphuong trinh vo nghiem\n");
			}
		}else{
			float x;
			x=-("%f",c)/("%f",b);
			printf("\nphuong trinh co nghiem x = %f\n",x);
		}
	}else{
		float d,x1,x2;
		d=("%f",b)*("%f",b)-4*("%f",a)*("%f",c);
		if(d<0){
			printf("\nphuong trinh vo nghiem\n");
		}else{
			if(d==0){
				x1=x2=-("%f",b)/2*("%f",a);
				printf("\nnghiem cua phuong trinh la %f\n",x1);
			}else{
				x1=(-("%f",b)-sqrt(d))/2*("%f",a);
				x2=(-("%f",b)+sqrt(d))/2*("%f",a);
				printf("\nphuong trinh co nghiem\n");
				printf("\nx1 = %f\n",x1);
				printf("\nx2 = %f\n",x2);
			}
		}
		
	}
}
