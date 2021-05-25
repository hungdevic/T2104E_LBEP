#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	printf("nhap i= ");
	scanf("%d",&i);
	printf("cac so nguyen to > %d la:\n",i);
	for (;;i--){
		int n,count;
		count =0;
		n=i;
		for (int x=1;x<=n;x++){
			if (n%x==0){
				count++;
			}
		}
		if (count==2){
		printf("%d\t",n);
		}
		if(i==0){
			break;
		}
	}
}
