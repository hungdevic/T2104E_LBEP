//chuong trinh kiem tra 3 so cua mot tam giac, tinh chu vi, dien tich tam giac do
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float a,b,c;
	printf("\nkiem tra 3 so a b c co phai canh cua tam giac hay khong\n");
	
	printf("\nnhap so a: ");
	scanf("%f",&a);
	
	printf("\nnhap so b: ");
	scanf("%f",&b);
	
	printf("\nnhap so c: ");
	scanf("%f",&c);
	
	if(("f",a)+("%f",b)>("%f",c)){
		if(("f",a)+("%f",c)>("%f",b)){
			if(("f",b)+("%f",c)>("%f",a)){
				float p, chuvi, dientich;
				p=(("f",a)+("%f",b)+("%f",c))/2;
				chuvi=("f",a)+("%f",b)+("%f",c);
				dientich=sqrt(("%f",p)*(("%f",p)-("%f",a))*(("%f",p)-("%f",b))*(("%f",p)-("%f",c)));
				printf("\na b c la 3 canh cua mot tam giac\n");
				printf("\nchu vi cua tam gia do = %f\n",chuvi);
				printf("\ndien tich cua tam giac do = %f\n",dientich);
			}else{
				printf("\na b c la khong phai la 3 canh cua mot tam giac\n");
			}
		}else{
			printf("\na b c la khong phai la 3 canh cua mot tam giac\n");
		}
	}else{
		printf("\na b c la khong phai la 3 canh cua mot tam giac\n");
	}
	
}
