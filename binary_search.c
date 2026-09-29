#include<stdio.h>
int a[100];
int low, high, mid;
int binary(int n , int item){

    for(int i = 0; i<n; i++){
        printf("ENTER THE DATA OF A[%d]", i);
        scanf("%d", &a[i]);
    }

    
    low = 0;
    high = n-1;

    mid = (low + high)/2 ;

    while(low <= high){
        if(item == a[mid]){
        printf("ELEMENT FOUND AT %d position", mid + 1);
        break;

        }
        else if( item > a[mid]){
            low = mid + 1;
        }
        else if( item < a[mid]){
            high = mid - 1;
        }
   
    }
    printf("ELEMENT DOES NOT EXIST");

}
int main(){

binary(10,5);

    return 0;
}