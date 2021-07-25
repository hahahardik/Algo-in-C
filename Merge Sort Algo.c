// Merge Sort - Ascending Order

#include<stdio.h>

void merge_sort(int A[], int B[], int C[], int size_a, int size_b, int size_c)
{
    int ctr_A, ctr_B, ctr_C;
    ctr_A = 0;
    ctr_B = 0;
    ctr_C = 0;

    while (ctr_A <= size_a && ctr_B <= size_b)
    {
        if (A[ctr_A] <= B[ctr_B])
        {
            C[ctr_C] = A[ctr_A];
            ctr_C++;
            ctr_A++;
        }

        else
        {
            C[ctr_C] = B[ctr_B];
            ctr_C++;
            ctr_B++;
        }
    }

    if (ctr_A > size_a)
    {
        while (ctr_B <= size_b)
        {
            C[ctr_C] = B[ctr_B];
            ctr_C++;
            ctr_B++;
        }
    }

    if (ctr_B > size_b)
    {
        while (ctr_A <= size_a)
        {
            C[ctr_C] = A[ctr_A];
            ctr_C++;
            ctr_A++;
        }
    }

}

void printArray(int a[], int size) //prints the final array
{
    int x;

    printf("\n");

    printf("\nThe Merge-sorted Array is:\t");
    for (x=0; x<size; x++)
        printf("%d\t", a[x]);

}

int main()
{
    int size_a, size_b, size_c, l, m;

    printf("\nEnter the size of an array A: ");
    scanf("%d", &size_a);
    printf("\nEnter %d Elements for the Array A:\n", size_a);
    int A[size_a];
    for (l=0; l<size_a; l++)
        scanf("%d", &A[l]);

    printf("\nEnter the size of an array B: ");
    scanf("%d", &size_b);
    printf("\nEnter %d Elements for the Array B\n", size_b);
    int B[size_b];
    for (m=0; m<size_b; m++)
        scanf("%d", &B[m]);

    size_c = size_a + size_b;
    int C[size_c];

    merge_sort(A, B, C, size_a, size_b, size_c);

    printArray(C, size_c);

    printf("\n");

    return 0;
}
