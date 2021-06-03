#include <stdio.h>
#include <string.h>

void demChuoi(char s[])
{
    strlwr(s);
    int nguyenAm = 0, phuAm = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        switch (s[i])
        {
        case 'a':
            nguyenAm++;
            break;
        case 'e':
            nguyenAm++;
            break;
        case 'i':
            nguyenAm++;
            break;
        case 'o':
            nguyenAm++;
            break;
        case 'u':
            nguyenAm++;
            break;
        default:
            phuAm++;
        }
    }
    printf("\nso luong ky tu nguyen am trong chuoi la: %d ", nguyenAm);
    printf("\nso luong ky tu phu am trong chuoi la: %d ", phuAm);
}

int main()
{

    int n;
    printf("nhap do dai chuoi: ");
    scanf("%d", &n);
    char s[n];
    printf("Nhap vao chuoi: ");
    scanf("%s", s);
    demChuoi(s);
    printf("\nchuoi chuyen thanh IN HOA:");
    strupr(s);
    printf("\n%s", s);
}
