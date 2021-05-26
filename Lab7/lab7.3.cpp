#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    system("cls");
    int n, x, count=0;
    printf("nhap so luong phan tu trong mang: ");
    scanf("%d",&n);
    int aray[n];
    for(int i=0;i<n;i++)
    {
        printf("nhap phan tu thu %d: ",i);
        scanf("%d",&aray[i]);
    }
    printf("\nnhap so nguyen x: ");
    scanf("%d",&x);
    for (int i = 0; i < n; i++)
    {
        if (x==aray[i])
        {
            count++;
        }
    }
    if (count==0)
    {
        printf("trong mang khong co so nguyen x");
    }else{
        printf("trong mang co so nguyen x");
    }
    
}