// Print Multiplication Table of Given Number
#include <stdio.h>

int main()
{
    int input;
    printf("Input the number (Table to be calculated) : ");
    scanf("%d", &input);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", input, i, input * i);
    }
    return 0;
}
