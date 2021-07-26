// Linear Search Algorithm

//Here we intitailize a counter and go one-by-one through the array to check if it is present in the array or not.

#include<stdio.h>

//Function for Linear Search
void Lsearch(int a[], int size, int item)
{
    int i;

    for (i=0; i<size; i++)
    {
        if (item == a[i])
        {
            printf("\nItem found at %d position.\n", i+1);
            break;
        }
    }
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

    Lsearch(a, size, item);

    printf("\n");

    return 0;
}
