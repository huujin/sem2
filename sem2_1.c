#include <stdio.h>

int main(void)
{
    printf("Enter the string: ");
    int a;
    a = getchar();
    while (a != '\n')
    {
        if (a!=' ' && a!='\t')
        {
            putchar(a);
        }
        a = getchar();
    }
    return 0;
}