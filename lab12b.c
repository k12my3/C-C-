/* 2010040027 -  Consider list of student records in a class. Arrange them in sorted order. Implement Quick sort and Merge sort separate modules to solve above
 with different inputs*/

#include <stdio.h>
#include <stdlib.h>

int partition(int a[], int low, int high)
{
	int pivot=a[low], i=low, j=high, temp;
	while(i<j)
	{
		while(a[i]<=pivot)
			i++;
		while(a[j]>pivot)
			j--;
		
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	
	temp=a[low];
	a[low]=a[j];
	a[j]=temp;
	return j;
}

void quicksort(int a[], int low, int high)
{
	if(low<high)
	{
		int pivot=partition(a,low,high);
		quicksort(a,low,pivot-1);
		quicksort(a,pivot+1,high);
	}
}

//void merge(int arr[], int l, int m, int r)
void merge(int a[], int l, int mid, int u)
{
/*    int i, j, k;
    int n1=(m-l+1), n2=(r-m);
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }*/

    int temp[1000], i=l, j=(mid+1), k=0;
    while((i<=mid)&&(j<=u))
    {
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    while(i<=mid)
        temp[k++]=a[i++];
    while(j<=u)
        temp[k++]=a[j++];
    for(i=l,j=0; i<=u; i++,j++)
        a[i]=temp[j];
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    int arr[50], num, ch;
    printf("\nEnter no. of Students : ");
    scanf("%d", &num);

    printf("\nEnter Student Roll-no.s:\n");
    for (int k =  0 ; k < num; k++)
        scanf("%d", &arr[k]);

    printf("\nChoose sort-type:\n 1. Quick    2. Merge\n");
    scanf("%d", &ch);
    switch(ch)
    {
        case 1: quicksort(arr, 0, (num-1)); break;
        case 2: mergeSort(arr, 0, (num-1)); break;
        default: printf("\nInvalid option.");
    }

    printf("\nRoll-no.s after sorting:\n");
    for (int k = 0; k < num; k++)
        printf("%d ", arr[k]);
    return 0;
}
