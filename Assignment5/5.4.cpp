#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{//tim boi chung nho nhat
	int a,b,bcnn;
	printf("nhap a: ");
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);
	int big;
	if(a>b)
		big=a;
	else
		big=b;
	do{
		bcnn=big;
		big++;
	}while(!(bcnn%a==0 && bcnn%b==0));
	
	printf("\nboi chung nho nhat cua %d & %d la: %d\n",a,b,bcnn);
}
