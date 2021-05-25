#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x,n,f1,f2,f3;
	f1=0;
	f2=1;
	f3=1;
	x=3;
	printf("nhap n= ");
	scanf("%d",&n);
	while(x<=n){
		
		f1=f2;
		f2=f3;
		f3=f1+f2;
		x++;
	}
		
	printf("so fibonacci thu %d la %d ",n,f3);
//0,1,1,2,3,5,8,13,21,34
}
