// Write a C program to add two given polynomials using an arra
#include <stdio.h>

int main()
{
    int a[10], b[10], c[10], m, n, k, k1, i, j, x;
   

    printf("\nEnter the no. of terms of the polynomial:");
    scanf("%d", &m);
    printf("Enter the degrees and coefficients:");
    for (i = 0; i < 2 * m; i++)
        scanf("%d", &a[i]);

    printf("\nEnter the no. of terms of 2nd polynomial:");
    scanf("%d", &n);
    printf("\nEnter the degrees and co-efficients:");
    for (j = 0; j < 2 * n; j++)
        scanf("%d", &b[j]);
   
    i = 0;
    j = 0;
    k = 0;
    while (m > 0 && n > 0)
    {
        if (a[i] == b[j])
        {
            c[k + 1] = a[i + 1] + b[j + 1];
            c[k] = a[i];
            m--;
            n--;
            i += 2;
            j += 2;
        }
        else if (a[i] > b[j])
        {
            c[k + 1] = a[i + 1];
            c[k] = a[i];
            m--;
            i += 2;
        }
        else
        {
            c[k + 1] = b[j + 1];
            c[k] = b[j];
            n--;
            j += 2;
        }
        k += 2;
    }
    while (m > 0)
    {
        c[k + 1] = a[i + 1];
        c[k] = a[i];
        k += 2;
        i += 2;
        m--;
    }
    while (n > 0)
    {
        c[k + 1] = b[j + 1];
        c[k] = b[j];
        k += 2;
        j += 2;
        n--;
    }
    printf("\nSum of the two polynomials is:");
    k1 = 0;
    if (c[k1 + 1] == 1)
        printf("x^%d", c[k1]);
    else
        printf("%dx^%d", c[k1 + 1], c[k1]);
    k1 += 2;
    while (k1 < k)
    {
        if (c[k1 + 1] == 1)
            printf("+x^%d", c[k1]);
        else
            printf("+%dx^%d", c[k1 + 1], c[k1]);
        k1 += 2;
    }
  
    return 0;
}

