#include <stdio.h>
#include <stdlib.h>

int main()
{
	double x, y, z;
	z=1;
	x=1;
	y=2;
	while (y<=1000)
	{
		z = z + x/y;
		y++;
	}
	printf("\n\n%f\n\n",z);
}
