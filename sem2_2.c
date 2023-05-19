#include <stdio.h>

typedef enum { F, T } boolean;

int main(void)
{
    boolean flag = T;
    printf("Enter the string: ");
    int a;
    a = getchar();
    while (a != '\n')
    {
        if ((a ==' ' || a=='\t') && flag == T)
        {
            putchar('\n');
            flag = F;
        }
        else
        {
            if (a !=' ' && a!='\t')
            {
                putchar(a);
                flag = T;
            }
        }
        a = getchar();
    }
    return 0;
}