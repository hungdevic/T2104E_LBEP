//chuong trinh tinh lai xuat kep gui tien theo nam
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float goc, lai, nam, tong;
	printf("\nchuong trinh tinh lai xuat kep theo so nam gui tien\n");
	printf("\nnhap vao so tien goc: ");
	scanf("%f",&goc);
	printf("\nlai xuat hang nam tinh theo %%: ");
	scanf("%f",&lai);
	printf("\nso nam gui tien: ");
	scanf("%f",&nam);
	tong = goc*(pow((1+lai/100),nam));
	printf("\nsau %1.1f nam thi so tien se nhan dc la %1.3f\n",nam,tong);
	return 0;
}
