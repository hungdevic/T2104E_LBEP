#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double x, s;
	s=1;
	x=2;
	while (x <= 100000)
	{
		s = s + x;
		x++;
	}
	printf("\n\n%f\n\n",s);
}
