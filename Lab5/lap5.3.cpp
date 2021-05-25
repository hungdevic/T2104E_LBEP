#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,f1,f2,f3;
	f1=0;
	f2=1;
	f3=1;
	printf("nhap n= ");
	scanf("%d",&n);
	while(f3<n){
		f1=f2;
		f2=f3;
		f3=f1+f2;
	}
		
	printf("so fibonacci tiem can voi %d la %d ",n,f2);
//0,1,1,2,3,5,8,13,21,34
}
