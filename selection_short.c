#include <stdio.h>
int main()
{
    int a[6]={23,34,12,2,86,27}, n=6, i, j, position, swap;
    
    for (i = 0; i < n - 1; i++)
    {
        position = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[position] > a[j])
                position = j;
        }
        if (position != i)
        {
            swap = a[i];
            a[i] = a[position];
            a[position] = swap;
        }
    }
    printf("Sorted Array:");
    for (i = 0; i < n; i++)
        printf("\n%d", a[i]);
    return 0;
}