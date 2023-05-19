#include <stdio.h>

int main(void)
{
    printf("Enter the string: ");
    int a;
    int i = 1;
    a = getchar();
    int previous = a;
    while (a != '\n')
    {
        a = getchar();
        if (previous == a)
        {
            i++;
        }
        else
        {
            if (i>=3)
            {
                for (int j = 0; j < i; j++)
                {
                    putchar(previous);
                }
                printf("\n");
            }
            i=1;
        }
        previous = a;
    }
    return 0;
}