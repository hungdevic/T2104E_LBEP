#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    system("cls");
    int n, count1=0, count2=0;
    printf("nhap kich thuoc mang: ");
    scanf("%d",&n);
    int aray[n];
    for(int i=0;i<n;i++)
    {
        printf("nhap phan tu thu %d: ",i);
        scanf("%d",&aray[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (aray[i]>0)
        {
            count1++;
            if (count1>count2)
            {
                count2=count1;
            }
        }else{
            count1=0;
        }
    }
    printf("chuoi so duong lien tiep nhieu nhat trong mang la: %d",count2);
}