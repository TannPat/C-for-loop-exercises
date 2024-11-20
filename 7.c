// Print Tables of 1-10 upto n Terms
#include <stdio.h>

int main()
{
    int input, tableNo = 1;
    printf("Input the table number starting from 1: ");
    scanf("%d", &input);
    while (tableNo <= 10)
    {
        for (int i = 1; i <= input; i++)
        {
            printf("%d X %d = %d, ", i, tableNo, tableNo * i);
        }
        printf("\n\n");
        tableNo++;
    }
    return 0;
}