#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

	float a,b,c;
	printf("nhap vao 3 so de tao thanh chieu dai cua 3 canh mot tam giac");
	while (a+b<=c || a+c<=b || b+c<=a){
	printf("\nnhap so a: ");
	scanf("%f",&a);
	
	printf("\nnhap so b: ");
	scanf("%f",&b);
	
	printf("\nnhap so c: ");
	scanf("%f",&c);
	if (a+b<=c || a+c<=b || b+c<=a){
		printf("\n3 so vua nhap khong tao thanh mot tam giac\n");
		printf("\nhay nhap lai 3 so khac\n");
	}
	}
	float p, chuvi, dientich;
	p=(a+b+c)/2;
	chuvi=(a+b+c);
	dientich=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("\n3 so vua nhap da tao thanh 3 canh cua mot tam giac\n");
	printf("\nchu vi cua tam giac do = %f\n",chuvi);
	printf("\ndien tich cua tam giac do = %f\n",dientich);
	
}
