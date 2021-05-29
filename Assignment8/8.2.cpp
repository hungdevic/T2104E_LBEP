#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");
    int n;
    printf("nhap kich thuoc mang: ");
    scanf("%d",&n);
    int aray[n];
    for(int i=0 ; i<n; i++)
    {//vòng lặp nhập mảng   
        if (i==0)//i=0 mảng chưa có gì để so sánh nên phần tử đầu tiên sẽ đc nhập trực thẳng    
        {
            printf("nhap phan tu %d: ",i);
            scanf("%d",&aray[i]);
        }else//lúc này i!=0 
        {
            int x, count=0;
            while (count==0)//vòng lặp nhập x 
            {
                printf("nhap phan tu %d: ",i);
                scanf("%d",&x);
                for (int j = i-1; j >=0; j--)//vòng lặp check x có trong mảng chưa.
                {
                    if (x==aray[j])
                    {
                        count++;
                        break;
                    }
                }
                if (count>0)//x có trong mảng   
                {
                    printf("trong mang co %d roi.\nnhap lai ");
                    count=0;
                }else//x chưa có trong mảng 
                {
                    aray[i]=x;
                    break;
                }
            }
        }
    }// kết thúc vòng lặp nhập
    printf("cac so trong mang sau khi nhap:\n");
    for(int i=0 ; i<n; i++)
    {
        printf("%d\t",aray[i]);
    }
}