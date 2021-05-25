#include <stdio.h>
#include <math.h>

int main()
{
	int n,count;
	count =0;
	printf("nhap n= ");
	scanf("%d",&n);
	for (int x=1;x<=n;x++){
		if (n%x==0){
			count++;
		}
	}
	if (count==2){
		printf("%d",n);
	}
}
