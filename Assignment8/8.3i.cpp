#include<stdio.h>
#include<stdlib.h>

int main()
{//nhập mảng và sắp xếp luôn theo phương pháp sắp xếp chèn 
    system("cls");
    int n;
    printf("nhap kich thuoc mang: ");
    scanf("%d",&n);
    int aray[n];

    for (int i = 0; i < n; i++)
    {//vòng lặp nhập mảng   
        
        int temp, j=i-1;
        printf("\nnhap phan tu %d: ",i);
        scanf("%d",&temp);//lưu tạm thời số mới nhập 
        while (j>=0 && temp < aray[j])//lặp nếu số mới nhập nhỏ hơn các số trước đó
        {
            aray[j+1] = aray[j];
            j--;
        }
        aray[j+1] = temp;

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