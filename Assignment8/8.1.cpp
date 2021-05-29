#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");
    int n;
    printf("nhap kich thuoc mang: ");
    scanf("%d",&n);
    int aray[n];
    for(int i=0;i<n;i++)
    {
        printf("nhap phan tu %d: ",i);
        scanf("%d",&aray[i]);
    }
    int x, low=aray[0];
    printf("nhap so nguyen x: ");
    scanf("%d",&x);

    for (int i = 0; i < n; i++)
    {//tìm số nhỏ nhất trong mảng
        if (aray[i]<=low)
        {
            low=aray[i];
        }
    }
    
    if (x<low)//nếu x < số nhỏ nhất trong mảng
    {
        printf("\ntrong mang khong co so tiem can duoi cua %d",x);
    }else{
        for (int i = 0; i < n; i++)
        {
            if (aray[i]>=low && aray[i]<x)
            {
                low=aray[i];
            }
        }
        printf("\nso tiem can duoi cua %d trong mang la %d",x,low);
    }
}