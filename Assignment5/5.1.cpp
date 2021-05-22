#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{//tim cac so chan be hon
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	printf("cac so chan < %d la:\n\n",n);
	for (; n>0; n--)
	{
		if(n%2==0){
			printf("%d\t",n);
		}
	}
}
