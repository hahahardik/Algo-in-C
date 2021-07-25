//Binary Search - Ascending Order

#include<stdio.h>

void Bsearch_Asc (int a[], int size, int item)
{
    int beg, mid, last;
    beg = 0;
    last = size-1;

    while (beg <= last)
    {
        mid = (beg + last) / 2;

        if (item == a[mid])
        {
            printf("\nItem found at position %d.\n", mid+1);
            break;
        }
        else if (item > a[mid])
            beg = mid + 1;
        else
            last = mid - 1;
    }

    if (beg > last)
        printf("\nItem not found in the array.\n");
}

int main()
{
    int size, n, item;

    printf("Enter the size of an array: ");
    scanf("%d", &size);

    printf("\nEnter %d Elements for the array:\n", size);
    int a[size];
    for (n=0; n<size; n++)
        scanf("%d", &a[n]);

    printf("\nEnter Search item: ");
    scanf("%d", &item);

    Bsearch_Asc(a, size, item);

    printf("\n");

    return 0;
}
