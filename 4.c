// Find Sum and Average of the Inputted 10 Numbers
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the 10 numbers: \n");
    for (int i = 1; i <= 10; i++)
    {
        printf("Number-%d: ", i);
        scanf("%d", &n);
        sum += n;
    }
    printf("The sum of 10 no is: %d\nThe Average is: %f", sum, (float)sum / 10);
    return 0;
}