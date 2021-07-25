//Insertion into an array

#include<stdio.h>

int findPOS (int a[], int item, int size)
{
    int POS; //position
    int ctr; //counter

    if (item < a[0])
    {
        POS = 0;
    }

    else
    {
        for (ctr = 1; ctr < (size-1); ctr++)
        {
           if (a[ctr] <= item && item < a[ctr+1])
           {
               POS = ctr + 1;
               break;
           }
        }

        if (ctr == size-1)
        {
            POS = size;
        }
    }

    return POS;

}

void printArray (int a[], int size)
{
    int i;

    printf("\nThe Final Array is:\t");
    for (i=0; i<size; i++)
        printf("%d\t", a[i]);

    printf("\n");
}

int insertion (int a[], int item, int size, int N)
{
   if (N > size + 1 || N <= 0)
        printf("\nOverflow\n");

    else
    {
        int POS;
        POS = findPOS (a, item, size);

        int ctr = size;
        while (ctr >= POS)
        {
            a[ctr] = a[ctr-1];
            ctr--;
        }

        a[POS] = item;
        size++;

        printArray(a, size);
    }

    return 0;
}

int main()
{
    int size, n, item, posn;

    printf("Enter the size of an array: ");
    scanf("%d", &size);

    printf("\nEnter %d Elements for the array:\n", size);
    int a[size];
    for (n=0; n<size; n++)
        scanf("%d", &a[n]);

    printf("\nEnter element to be inserted: ");
    scanf("%d", &item);

    printf("\nEnter the position to insert: ");
    scanf("%d", &posn);

    insertion(a, item, size, posn);

    return 0;
}

