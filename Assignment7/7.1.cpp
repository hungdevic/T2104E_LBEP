#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    system("cls");
    int n, last, count=0;
    printf("nhap kich thuoc mang: ");
    scanf("%d",&n);
    int aray[n];
    for(int i=0;i<n;i++)
    {
        printf("nhap phan tu %d: ",i);
        scanf("%d",&aray[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if (aray[i]%2!=0)
        {
            last=aray[i];
            count++;
        }
    }
    if (count==0)
    {
        printf("\ntrong mang khong co so le");   
    }else{
        printf("\nso le cuoi cung trong mang la: %d\n",last);
    }
}