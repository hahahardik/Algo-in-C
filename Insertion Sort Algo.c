// Insertion Sort - Ascending Order

#include<stdio.h>

void insertion_sort (int a[], int size) //sorting an array using insertion sort algorithm
{
    int i, j, k, temp;

    for (i=0; i<size; i++)
    {
        for (j=i-1; j>= 0; j--)
        {
            if(a[j]>a[j+1])
            {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
            }
            else
              break;
        }

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
    int m, size;

    printf("Enter the size of Array: ");
    scanf("%d", &size);

    int a[size];
    printf("Enter %d Elements:\n", size);
    for (m=0; m<size; m++)
        scanf("%d", &a[m]);

    insertion_sort(a, size);

    printArray(a, size);

    printf("\n");

    return 0;
}
