// Print Pyramid with Increasing Numbers
#include <stdio.h>

int main()
{
    int n = 1, rows = 4;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        printf("%d", n);
        n++;
        for (int k = 1; k < i; k++)
        {
            printf(" %d", n);
            n++;
        }
        printf("\n");
    }
    return 0;
}
