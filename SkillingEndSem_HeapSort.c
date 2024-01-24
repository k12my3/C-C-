/* 2010040027 - DSA End Sem Skilling Exam (Set-6): 
 There are 20 integer values in an array. I would like to search for a value in an array. To 
search from that existing list is very difficult. Develop a program to sort these array 
values using Heap sort so that my work becomes easy. */

#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int n, int i)
{
    int l, r, max;
    max = i; //largest
    l = 2*i+1; //left
    r = 2*i+2; //right

    if (l<n && arr[l] > arr[max])
        max=l;
    if (r<n && arr[r] > arr[max])
        max=r;

    if (max!=i) 
    {
        swap(&arr[i], &arr[max]);
        heapify(arr, n, max);
    }
}

void heapSort(int arr[], int n)
{
    for (int i =(n/2)-1; i>=0; i--)
        heapify(arr, n, i);

    for (int i=(n-1); i>=0; i--) 
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

int main()
{
    int arr[50], num;
    printf("\nEnter array size : ");
    scanf("%d", &num);

    printf("\nEnter array elements:\n");
    for (int i=0 ; i<num; i++)
        scanf("%d", &arr[i]);

    heapSort(arr, num);

    printf("\nElements after sorting:\n");
    for (int i=0; i<num; i++)
        printf("%d ", arr[i]);
    return 0;
}
