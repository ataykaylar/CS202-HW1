#include "sorting.h"


void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void mergeSort(int *arr, int size, unsigned long &compCount, unsigned long &moveCount)
{
    mergeSort(arr, 0, size-1, compCount, moveCount);
}


void mergeSort(int* arr, int first, int last, unsigned long& compCount, unsigned long& moveCount )
{

    if (first < last)
    {

        int mid = (first + last)/2; 	// index of midpoint
        mergeSort(arr, first, mid, compCount, moveCount);

        mergeSort(arr, mid + 1, last, compCount, moveCount);

        // merge the two halves
        merge(arr,first,mid, last, compCount, moveCount);
    }
}

void merge( int* arr, int first, int mid, int last, unsigned long &compCount, unsigned long &moveCount)
{

    int first1 = first;
    int first2 = mid+1;
    int *temp = new int[last - first + 1];
    int count = 0;
    while (first1 <= (mid) && first2 <= last)
    {
        if (arr[first2] < arr[first1])
        {
            temp[count++] = arr[first2];
            first2 += 1;
        }
        else
        {
            temp[count++] = arr[first1];
            first1 += 1;
        }
        compCount++;
        moveCount++;
    }
    while (first1 <= (mid))
    {
        temp[count++] = arr[first1];
        first1 += 1;
        moveCount++;
    }

    while (first2 <= last)
    {
        temp[count++] = arr[first2];
        first2 += 1;

        moveCount++;
    }

    for (int i = 0; i < (count); i++)
    {
        arr[i + first] = temp[i];
        moveCount++;
    }
    delete [] temp;


}


void quickSort(int *arr, int size, unsigned long &compCount, unsigned long &moveCount)
{
    quickSort( arr, 0, size-1, compCount, moveCount);
}


void quickSort(int *arr, int first, int last, unsigned long &compCount, unsigned long &moveCount)
{

    int pivotIdx;

    if (first < last)
    {

        partition(arr, first, last, pivotIdx, compCount, moveCount);
        quickSort(arr, first, pivotIdx - 1, compCount, moveCount);
        quickSort(arr, pivotIdx + 1, last, compCount, moveCount);
    }
}

void partition(int *arr, int first, int last, int &pivotIdx, unsigned long &compCount, unsigned long &moveCount)
{

    int pivot = arr[first];

    moveCount++;

    int endS1 = first;
    int firstUnknown = first + 1;


    while (firstUnknown <=  last)
    {
        if (arr[firstUnknown] < pivot)
        {
            endS1++;
            swap(arr[firstUnknown], arr[endS1]);

            moveCount = moveCount + 3;
        }
        compCount++;
        firstUnknown++;
    }
    swap(arr[first], arr[endS1]);
    moveCount = moveCount + 3;
    pivotIdx = endS1;
}


void insertionSort( int* arr, const int size, unsigned long& compCount, unsigned long& moveCount )
{
    for (int unsorted = 1; unsorted < size; ++unsorted)
    {

        int nextItem = arr[unsorted];
        int loc = unsorted;

        for (  ; (loc > 0) && (arr[loc-1] > nextItem); --loc){
            arr[loc] = arr[loc-1];
            compCount++;
            moveCount++;
        }

        arr[loc] = nextItem;
        moveCount++;
    }
}

