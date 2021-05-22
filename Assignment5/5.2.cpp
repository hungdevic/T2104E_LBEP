#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{//tim cac uoc va tinh tong cua cac uoc
	int n;
	float sum=0;
	printf("nhap n: ");
	scanf("%d",&n);
	printf("cac uoc cua %d la:\n\n",n);
	for (int x=1; x<n; x++)
	{
		if(n%x==0){
			printf("%d\t",x);
			sum=sum+x;
		}
	}
	printf("\n\ntong cac uoc cua %d = %.0f\n",n,sum);
}
