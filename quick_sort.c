#include<stdio.h>

void print(int a[],int n){

    for (int i = 0; i <n; i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
    
}

int partition(int a[],int low,int high){

    int pivot = a[low];

    int i = low + 1;
    int j = high;

    int temp;

    while (i < j)
    {
        while (i <=j&& a[i] < pivot)
        {
            i++;
        }
        while (j > i && a[j] >= pivot )
        {
            j--;
        }
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            
        }
        
        
    }

    temp = a[low];
    a[low] = a[j];
    a[j] = temp;


    return j;
    
}

void quicksort(int a[],int low,int high){

    if (low < high)
    {
    int pivotindex = partition(a,low,high);

    quicksort(a,low,pivotindex-1);
    quicksort(a,pivotindex+1,high);
    }
    
}

int main(){

    int a[]={6,5,6,1,1,9,7,10,1,3};

    int n=10;

    print(a,n);

    quicksort(a,0,n-1);

    printf("AFTER SORTING=\n");

    print(a,n);

    return 0;
}