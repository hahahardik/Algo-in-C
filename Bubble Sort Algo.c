// Bubble Sort - Ascending Order

#include<stdio.h>

//Function for Bubble Sort
void bubble_sort (int a[], int size) 
{
    int i, j, k, temp;

    for (i=0; i<size; i++)
    {
        for (j=0; j<((size-1) - i); j++)
        {
            if (a[j] > a[j+1])
            {
               temp = a[j];
               a[j] = a[j+1];
               a[j+1] = temp;
            }
        }

        //For printing the array after each step
        printf("\nStep %d:\t", i+1);
        for (k=0; k<size; k++)
            printf("%d\t", a[k]);
        getch();

    }
}

//For printing the final array
void printArray(int a[], int size)
{
    int l;

    printf("\n");

    printf("\nThe Sorted Array is:\t");
    for (l=0; l<size; l++)
    {
        printf("%d\t", a[l]);
    }
}


int main()
{
    int m, size;

    printf("Enter the size of Array: ");
    scanf("%d", &size);

    int a[size];
    printf("Enter %d Elements:\n", size);
    for (m=0; m<size; m++)
        scanf("%d", &a[m]);

    bubble_sort(a, size);

    printArray(a, size);

    printf("\n");

    return 0;
}
