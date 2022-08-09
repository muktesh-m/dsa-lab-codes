#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r, c, i, j, count;
    printf("ENter no of rows and columns: ");
    scanf("%d %d", &r, &c);
    int *arr[r];
    for (i = 0; i < r; i++)
        arr[i] = (int *)malloc(c * sizeof(int));

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            printf("Enter element at %d and %d position : ", i, j);
            scanf("%d", &arr[i][j]);
        }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)

            printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}