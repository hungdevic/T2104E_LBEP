#include<stdio.h>
#include<stdlib.h>
#include"assignment9.h"


int main()
{ 
    system("cls");
    printf("<>---------------------------------------<>");

    printf("\nBai 1. Ham tim X co trong mang hay khong\n");
    int n;
    printf("\nnhap kich thuoc mang: ");
    scanf("%d",&n);
    int aray[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nhap aray[%d]: ",i);
        scanf("%d",&aray[i]);
    }   
    int x;
    printf("\nnhap x: ");
    scanf("%d",&x);
    
    if (findX(aray,n,x))
    {
        printf("\n%d co trong mang\n",x);
    }else
    {
        printf("\n%d khong co trong mang\n",x);
    }

    printf("\n<>---------------------------------------<>");

    printf("\nBai 2. Ham in ra cac so le trong mang\n");
    printf("\ncac so le trong mang:\n");
    printOdd(aray,n);

    printf("\n\n<>---------------------------------------<>");

    printf("\n\nBai 3. Ham tim uoc chung lon nhat cua 2 so\n");
    int a,b;
	printf("\nnhap a: ");
	scanf("%d",&a);
	printf("\nnhap b: ");
	scanf("%d",&b);
    printf("\nuoc chung lon nhat cua %d & %d la: %d",a,b,ucln(a,b));

    printf("\n\n<>---------------------------------------<>");

    printf("\n\nBai 4. Ham tim boi chung nho nhat cua 2 so\n");
    int c,d;
	printf("\nnhap c: ");
	scanf("%d",&c);
	printf("\nnhap d: ");
	scanf("%d",&d);
    printf("\nBoi chung nho nhat cua %d & %d la: %d\n\n",c,d,bcnn(c,d));
    getchar();
}   