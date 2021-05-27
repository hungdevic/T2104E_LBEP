#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    system("cls");
    int n, min=0;
    printf("nhap kich thuoc mang: ");
    scanf("%d",&n);
    int aray[n];
    for(int i=0;i<n;i++)
    {
        printf("nhap phan tu %d: ",i);
        scanf("%d",&aray[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (aray[i]>0)
        {
            min=aray[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (aray[i]<min && aray[i]>0)
        {   
            min=aray[i];

        }
        
    }
    if (min==0)
    {
        printf("\ntrong mang khong co so nguyen duong");
    }else{
        printf("\nso nguyen duong nho nhat trong mang la %d",min);
    }
    
}