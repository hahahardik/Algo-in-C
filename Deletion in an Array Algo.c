// Deletion in an Array

#include<stdio.h>

int Lsearch(int a[], int size, int item)
{
    int i;

    for (i=0; i<size; i++)
    {
        if (item == a[i])
        {
            return  i;
            break;
        }
    }
}


void printArray (int a[], int size)
{
    int j;

    printf("\nThe Final Array is:\t");
    for (j=0; j<size; j++)
        printf("%d\t", a[j]);

    printf("\n");
}


int deletion (int a[], int size, int item)
{
    int pos;
    pos = Lsearch(a, size, item);

    int ctr;
    for (ctr = pos; ctr < size; ctr++)
    {
        a[ctr] = a[ctr+1];
        size--;
    }

    printArray(a, size);
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

    printf("\nEnter element to be deleted: ");
    scanf("%d", &item);

    deletion(a, size, item);

    return 0;
}
