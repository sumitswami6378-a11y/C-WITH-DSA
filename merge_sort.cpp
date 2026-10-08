#include<stdlib.h>
#include<stdio.h>

void insert(int arr1[],int arr2[],int m, int n){

    printf("ENTER THE ELEMENTS OF THE ARRAY 1");

    for(int i=0; i<m; i++){

        printf("ENTER THE ELEMENT OF INDEX arr1[%d] =",i);
        scanf("%d",&arr1[i]);
    }

    for (int i = 0; i <n; i++)
    {
        printf("ENTER THE ELEMENT OF INDEX arr2[%d] =",i);
        scanf("%d",&arr2[i]);
    }
    
}

void merging(int arr1[],int arr2[],int arr3[],int m, int n){
    
    int i =0;
    int j=0;
    int k=0;

    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else{

            arr3[k++] = arr2[j++];
        }
        
    }
    while (i<m)
    {
        arr3[k++] = arr1[i++];
    }
    while (j<n)
    {
        arr3[k++] = arr2[j++];
    }

    for (int i = 0; i < m+n; i++)
    {
        printf("merged array is arr3[%d]=%d\n",i,arr3[i]);
    }
    
    
    
    
}

int main(){

    int arr1[100];
    int arr2[100];
    int n;
    int m;
    int k[100];
    int arr3[100];

    printf("ENTER THE SIZE OF ARRAY 1 m=");
    scanf("%d",&m);

    printf("ENTER THE SIZE OF ARRAY 2 n=");
    scanf("%d", &n);

    insert(arr1,arr2,m,n);

    merging(arr1,arr2,arr3,m,n);


    return 0;
}
