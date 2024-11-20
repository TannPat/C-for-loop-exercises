// Print First n Odd Numbers and their Sum
#include <stdio.h>

int main()
{
    int input, sum = 0;
    printf("Input number of terms : ");
    scanf("%d", &input);
    printf("The odd numbers are: ");
    for (int i = 1; i <= input * 2; i += 2)
    {
        printf("%d ", i);
        sum += i;
    }
    printf("\nThe Sum of odd Natural Number upto %d terms: %d", input, sum);
    return 0;
}
