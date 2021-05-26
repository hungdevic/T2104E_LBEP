#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    system("cls");
    int n, count=0;
    float ave=0;
    printf("nhap so luong phan tu trong mang: ");
    scanf("%d",&n);
    int aray[n];
    for(int i=0;i<n;i++)
    {
        printf("nhap phan tu thu %d: ",i);
        scanf("%d",&aray[i]);
    }
    for(int i = 0; i < n; i+=2)
    {
        if (aray[i]%2!=0)
        {
            ave=ave+aray[i];
            count++;
        }
    }
    if (ave==0)
    {
        printf("trong mang cac phan tu o vi tri chan khong co so le");   
    }else{
        ave=ave/count;
        printf("binh quan cac so le o vi tri chan trong mang la: %f\n",ave);
    }
}