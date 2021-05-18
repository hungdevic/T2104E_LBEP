//chuong trinh sap xep nguoc lai nhung ky tu nhap vao
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char any[80];
	printf("nhap vao xuoi: ");
	scanf("%[^\n]",any);
	printf("dao nguoc ne ^^: %s",strrev(any));
	return 0;
}
