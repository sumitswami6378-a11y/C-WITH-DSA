#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high)
{
    int pivot = arr[low];

    int count = 0;

    for(int i = low + 1; i <= high; i++)
    {
        if(arr[i] < pivot)
        {
            count++;
        }
    }

    int pivot_index = low + count;

    swap(arr[pivot_index], arr[low]);

    int i = low;
    int j = high;

    while(i < pivot_index && j > pivot_index)
    {
        while(arr[i] < pivot)
        {
            i++;
        }

        while(arr[j] > pivot)
        {
            j--;
        }

        if(i < pivot_index && j > pivot_index)
        {
            swap(arr[i], arr[j]);

            i++;
            j--;
        }
    }

    return pivot_index;
}


void quickSortHelper(vector<int>& arr, int low, int high)
{
    // Base condition
    if(low >= high)
    {
        return;
    }

    int pivot_index = partition(arr, low, high);

    quickSortHelper(arr, low, pivot_index - 1);

    quickSortHelper(arr, pivot_index + 1, high);
}


vector<int> quickSort(vector<int> arr)
{
    quickSortHelper(arr, 0, arr.size() - 1);

    return arr;
}