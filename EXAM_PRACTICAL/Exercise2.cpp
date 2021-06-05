#include <stdio.h>
#include <string.h>

void upperCase(char *s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            s[i] -= 32;
        }
    }
    printf("\nConvert string to upper case:");

    printf("\n%s", s);
}

int main()
{

    int n;
    printf("Input string length: ");
    scanf("%d", &n);
    char s[n];
    printf("Input string: ");
    scanf("%s", s);
    upperCase(s);
}
