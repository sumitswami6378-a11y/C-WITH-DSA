#include<stdio.h>
int a[100];

void binary(int n,int item){

    int low =0;
    int high = n-1;
    printf("ENTER THE DATA OF THE ARRAY=");

    for(int i=0; i<n; i++){

        printf("ENTER THE DATA a[%d]=",i);
        scanf("%d",&a[i]);
    }

    while(low <= high){
        int mid = low + (high - low)/2;

        if(item == a[mid]){
            printf("element found at %d index",mid);
            return;
        }

        else if(item > a[mid]){
            low = mid + 1;
        }
        else if(item < a[mid]){

            high = mid -1;
        }
        else{
            printf("element is not found");
        }
    }
}


int main(){

binary(10,5);


    return 0;
}