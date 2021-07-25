// Selection Sort - Ascending Order

#include<stdio.h>

void selection_sort(int a[], int size) //sorting using selection sort algorithm
{
    int small;
    int i, j, k, temp, POS;

    for (i = 0; i < size; i++)
    {
        small = a[i];

        for (j = i; j < size; j++)
        {
            if (a[j] < small)
            {
                small = a[j];
                POS = j;
            }
        }

        temp = a[i];
        a[i] = small;
        a[POS] = temp;

        //Stepwise Print
        printf("\nStep %d:\t", i+1);
        for (k=0; k<size; k++)
            printf("%d\t", a[k]);
        getch();
    }

}

void printArray(int a[], int size) //prints the final array
{
    int x;

    printf("\n");

    printf("\nThe Sorted Array is:\t");
    for (x=0; x<size; x++)
        printf("%d\t", a[x]);

}

int main()
{
    int size, n;

    printf("Enter the size of an array: ");
    scanf("%d", &size);

    printf("\nEnter %d Elements for the array:\n", size);

    int a[size];
    for (n=0; n<size; n++)
        scanf("%d", &a[n]);

    selection_sort(a, size);

    printArray(a, size);

    printf("\n");

    return 0;
}
