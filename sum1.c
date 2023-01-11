#include "stdio.h"
int main()
{
    int a = 0, sum;
    for (int i = 0; i < 11; i++)
    {
        sum = a + i;
        printf("\nsum of current no %d and previous no %d is =% d", a, i, sum);
        a = i;
    }
    return 0;
}
