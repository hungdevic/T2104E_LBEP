#include <stdio.h>
#include <stdlib.h>

int findMax(int *array, int n)
{
    int max = *(array);
    for (int i = 0; i < n; i++)
    {
        if (max < *(array + i))
        {
            max = *(array + i);
        }
    }
    return max;
}

void sapXepMang(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i - 1;
        int tmp = *(array + i);
        while (j >= 0 && tmp < *(array + j))
        {
            *(array + j + 1) = *(array + j);
            j--;
        }
        *(array + j + 1) = tmp;
    }
    printf("\nmang sau khi sap xep:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(array + i));
    }
}

int main()
{
    system("cls");
    int n;
    printf("\nnhap kich thuoc mang ban dau: ");
    scanf("%d", &n);
    int *ary;
    ary = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("\nnhap phan tu thu %d: ", i);
        scanf("%d", ary + i);
    }
    printf("\nphan tu lon nhat trong mang la: %d", findMax(ary, n));
    sapXepMang(ary, n);

    int m;
    do
    {
        printf("\nnhap kich thuoc mang muon mo rong thanh: ");
        scanf("%d", &m);
    } while (m <= n);

    ary = (int *)realloc(ary, m * sizeof(int));
    printf("\nnhap them %d phan tu:", m - n);
    for (int i = n; i < m; i++)
    {
        printf("\nnhap phan tu thu %d: ", i);
        scanf("%d", ary + i);
    }
    printf("\nphan tu lon nhat trong mang moi la: %d", findMax(ary, m));
    sapXepMang(ary, m);

    free(ary);
}