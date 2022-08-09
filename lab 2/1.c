#include <stdio.h>

int main()
{
    int i, j, n, min, max, p, q;

    printf("Enter size of the 2d array : ");
    scanf("%d %d", &p, &q);
    int a[p][q];

    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("Enter element at %d and %d position : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    min = max = a[0][0];
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            if (min > a[i][j])
                min = a[i][j];
            if (max < a[i][j])
                max = a[i][j];
        }
    }
    printf("minimum of array is : %d", min);
    printf("\nmaximum of array is : %d", max);

    return 0;
}