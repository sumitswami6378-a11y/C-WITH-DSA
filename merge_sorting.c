#include<stdio.h>

void print(int arr[],int n){


    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n",i,arr[i]);
    }
    
}

void merge(int *arr,int low,int mid,int high){

    int i = low;
    int j = mid + 1;
    int k = low;

    int temp[100];

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else{

            temp[k++] = arr[j++];
        }
        
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while (j <= high)
    {
        temp[k++] = arr[j++];
    }


    // copy in the original array

    for (int i = low; i <=high; i++)
    {
        arr[i] = temp[i];
    }
    
    
    
    
}

void mergesort(int arr[],int low,int high){

  
    if (low < high)
    {

          int mid = low + (high - low)/2;

        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);

        merge(arr,low,mid,high);
    }
    
}


int main(){

    int arr[] ={4,5,5,7,8,4,5,8,4,84,5,5,8};
    
    int n = 13;

    print(arr,n);

    mergesort(arr,0,n-1);



    printf("AFTER SORTING THE ARRAY=");

    print(arr,n);



    return 0;
}