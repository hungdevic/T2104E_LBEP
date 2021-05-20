#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float i,n;
	i=1;
	printf("\nnhap n: ");
	scanf("%f",&n);
	double z;
	z = 1;
	while (i <= n)
	{
		z = z * i;
		i++;
	}
	if (z < pow(10,10)){
		printf("\n\n%f\n\n",z);
	}else{
		printf("\n\n%e\n\n",z);
	}
}
