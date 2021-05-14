//chuong trinh tim so nho nhat trong 3 so
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float a,b,c;
	printf("\ntim so nho nhat trong 3 so\n");
	
	printf("\nnhap so thu nhat: ");
	scanf("%f",&a);
	
	printf("\nnhap so thu hai: ");
	scanf("%f",&b);
	
	printf("\nnhap so thu ba: ");
	scanf("%f",&c);
	
	if(a<b){
		if(a<c){
			printf("\n%f la so nho nhat\n",a);
		}else{
			printf("\n%f la so nho nhat\n",c);
		}
	}else{
		if(b<c){
			printf("\n%f la so nho nhat\n",b);
		}else{
			printf("\n%f la so nho nhat\n",c);
		}
	}

}
