//chuong trinh kiem tra 3 so cua mot tam giac, tinh chu vi, dien tich tam giac do
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	while(true){
	float a,b,c;
	printf("\nkiem tra 3 so a b c co phai canh cua tam giac hay khong\n");
	
	printf("\nnhap so a: ");
	scanf("%f",&a);
	
	printf("\nnhap so b: ");
	scanf("%f",&b);
	
	printf("\nnhap so c: ");
	scanf("%f",&c);
	
	if(a+b>c && a+c>b && b+c>a){
				float p, chuvi, dientich;
				p=(a+b+c)/2;
				chuvi=(a+b+c);
				dientich=sqrt(p*(p-a)*(p-b)*(p-c));
				printf("\na b c la 3 canh cua mot tam giac\n");
				printf("\nchu vi cua tam gia do = %f\n",chuvi);
				printf("\ndien tich cua tam giac do = %f\n",dientich);
	}else{
		printf("\na b c la khong phai la 3 canh cua mot tam giac\n");
	}
	}	
}
