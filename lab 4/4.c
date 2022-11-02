// Write a C program to multiply 2 polynomials
#include <stdio.h>
int main()
{
    int i, j, m, n;
    printf("Enter number of terms in Polynomial 1\n");
    scanf("%d", &m);
    printf("Enter number of terms in Polynomial 2\n");
    scanf("%d", &n);

    int a[m], b[n], prod[m + n];
    printf("Enter Elements of Polynomial 1\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter Elements of Polynomial 2\n");
    for (i = 0; i < n; i++)
    {

        scanf("%d", &b[i]);
    }
    for (i = 0; i < m + n; i++)
    {
        prod[i] = 0;
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] != 0 && b[j] != 0)
                prod[i + j] += a[i] * b[j];
        }
    }
    for (i = m + n - 1; i >= 0; i--)
    {
        if (prod[i] != 0)
        {
            if (i != 0)
            {
                printf("%d x^%d + ", prod[i], i);
            }
            else
            {
                printf("%d x^%d\n", prod[i], i);
            }
        }
    }
    return 0;
}
