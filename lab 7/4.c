/* Write a C program to employ Linear Probing to avoid collisions in
a Hash-basedsearching. Use Hash Table Size: 07;
 Elements are: 76, 40, 48, 5, 55.*/
#include <stdio.h>
#define size 7
int hash(int key)

{
    return key % size;
}

int probe(int h[], int key)
{
    int index = hash(key);
    int i = 0;
    while (h[(index + i) % size] != 0)
        i++;
    return (index + i) % size;
}
void insert(int h[], int key)
{
    int index = hash(key);
    if (h[index] != 0)
        index = probe(h, key);
    h[index] = key;
}

void disp(int arr[])
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int search(int h[], int key)
{
    int index = hash(key);
    int i = 0;
    while (h[(index + i) % size] != key)
    {
        i++;
    }
    return (index + i) % size;
}
int main()
{

    int arr[] = {76, 40, 48, 5, 55};
    int ht[size] = {0};
    for (int i = 0; i < 5; i++)
    {
        insert(ht, arr[i]);
    }

    disp(ht);
    printf("\nFound at %d", search(ht, 40));
    return 0;
}