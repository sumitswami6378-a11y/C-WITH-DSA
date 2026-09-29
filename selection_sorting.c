#include<stdio.h>
int a[100];
int n;
int temp;

void selection_sort(){

    printf("AFTER SORTING:\n");

    for(int i=0; i<n-1; i++){

        int min = i;
        for(int j=i+1; j<n; j++){

            if(a[min] > a[j]){
                min = j;
            }

            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }

    for(int i=0; i<n; i++){

        printf("a[%d]=%d\n",i,a[i]);
    }
}


void array(){

    
printf("ENTER THE ELEMENTS OF THE ARRAY:");

for(int i=0; i<n; i++){

    printf("ENTER THE a[%d]=",i);
    scanf("%d",&a[i]);
}

printf("BEFORE SORTING:\n");

for(int i=0; i<n; i++){

    printf("a[%d]=%d\n",i,a[i]);
}

}


int main(){

printf("ENTER THE SIZE OF THE ARRAY:");
scanf("%d",&n);

array();

selection_sort();



    return 0;
}