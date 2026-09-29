#include<stdio.h>
int a[100];
int n;
int temp;

void array(){

    printf("ENTER THE ELEMENTS OF THE ARRAY=\n");
    for(int i=0; i<n; i++){

        printf("ENTER THE a[%d]=",i);
        scanf("%d", &a[i]);
    }

    printf("before sorting\n");

for(int i=0; i<n ; i++){

    printf("a[%d]=%d\n",i,a[i]);
}

}


void bubble_sort(){

    printf("after sorting=");

    for(int i=0; i < n-1; i++){
        

        for(int j=0; j<n-1-i; j++){
            
         if(a[j] > a[j+1]){
             temp = a[j];

         a[j] = a[j+1];

         a[j+1] = temp;
         }

        }
    }

    for(int i=0; i<n ; i++){

        
    printf("a[%d] = %d\n",i,a[i]);

    }

}



int main(){

    printf("ENTER THE SIZE OF THE ARRAY=");
    scanf("%d",&n);

array();
bubble_sort();


    return 0;
}