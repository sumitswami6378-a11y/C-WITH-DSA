#include<stdio.h>

void merge(int arr1[],int low,int mid,int high){


    int i =low;
    int j = mid+1;
    int k = low;

    int dummy[100];

    while(i<=mid && j<=high)
    {
        if (arr1[i] < arr1[j])
        {
            dummy[k++] = arr1[i++];
        }
        else{

            dummy[k++] = arr1[j++];
        }
        
    }
    while (i <=mid)
    {
        dummy[k++] = arr1[i++];
    }
    while (j<=high)
    {
        dummy[k++] = arr1[j++];
    }
    


    // copy array in the original array

    for (int i = low; i <= high; i++)
    {
        arr1[i] = dummy[i];
    }
    
    
    
}


void mergesort(int arr1[],int low,int high){

    if (low < high)
    {
        int mid = low + (high - low)/2;

        mergesort(arr1,low,mid);
        mergesort(arr1,mid+1,high);

        merge(arr1,low,mid,high);
    }
    
}

int main(){

    int arr1[12] ={1,8,2,6,10,47,6,10,12,47,64,12};
    int n = 12;

    mergesort(arr1,0,n-1);

    // print sorted array

    for (int i = 0; i <n; i++)
    {
        printf("arr[%d]=%d\n",i,arr1[i]);
    }
    

    return 0;
}