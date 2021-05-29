#include<stdio.h>
#include<stdlib.h>

int main()
{//nhập mảng và sắp xếp luôn theo phương pháp sắp xếp nổi bọt
    system("cls");
    int n;
    printf("nhap kich thuoc mang: ");
    scanf("%d",&n);
    int aray[n];

    for (int i = 0; i < n; i++)//vòng lặp duyệt mảng
    {
        
        printf("\nnhap phan tu %d: ",i);
        scanf("%d",&aray[i]);
        
        for (int j = i; j >=1; j--)
        {
            if (aray[j] < aray[j-1])//so sánh với số đằng trước để hoán đổi vị trí
            {
                int temp = aray[j];
                    aray[j] = aray[j-1];
                    aray[j-1] = temp;
            }
            
        }
        
        
        for (int k = 0; k <=i ; k++)
        {
            printf("%d\t",aray[k]);
        }
        
    }

    printf("\ncac so trong mang sau khi nhap:\n");
    for(int i=0 ; i<n; i++)
    {
        printf("%d\t",aray[i]);
    }
}