#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    system("cls");
    int n, count=0, countSave=0, sum=0, sumMax=0;
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
            count++;
            sum+=aray[i];
            if (sum>sumMax)
            {
                sumMax=sum;
                countSave=count;
            }
        }else{
            count=0;
            sum=0;
        }
    }
    printf("chuoi so duong lien tiep co tong lon nhat trong mang la: %d",sumMax);
}