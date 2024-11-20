// Print Sum of First 10 Natural Numbers
#include <stdio.h>

int main()
{
    int sum = 0;
    printf("The first 10 natural numbers is: \n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", i);
        sum += i;
    }
    printf("\nThe sum is: %d", sum);
    return 0;
}