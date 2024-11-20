// Print Sum and Average of First n Natural Numbers
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter no. of natural numbers to be summed: ");
    scanf("%d", &n);
    printf("The first %d natural numbers is: \n", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
        sum += i;
    }
    printf("\n The sum of Natural Number upto %d terms: %d", n, sum);
    return 0;
}