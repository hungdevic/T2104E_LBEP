#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{//tim uoc chung lon nhat
	int a,b,ucln;
	printf("nhap a: ");
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);
	
	for (int i=1; i<=a && i<=b ;i++){
		if(a%i==0 && b%i==0){
			ucln=i;
		}
	}
	printf("%d",ucln);
}
