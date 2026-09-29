#include<stdio.h>

int a[100];
int key;
int n;



void array(){


    printf("ENTER THE ELEMENTS OF THE ARRAY: ");
    for(int i=0; i<n; i++){

        printf("ENTER THE ELEMENT OF a[%d]=",i);
        scanf("%d",&a[i]);
    }

    printf("before sorting\n");

    for(int i =0; i<n; i++){
        printf("a[%d]= %d\n",i,a[i]);
    }
}


void insertion_sort(){

printf("AFTER SORTING THE ARRAY=\n");

for(int i =1; i<n; i++){
    key = a[i];

    int j = i-1;

    while(j>=0 && a[j] > key){

        a[j+1] = a[j];
        j--;
       
    }
     a[j+1] = key;
}


for(int i=0; i<n; i++){

    printf("a[%d]= %d\n",i,a[i]);
}

}

int main(){

printf("ENTER THE SIZE OF THE ARRAY=");
scanf("%d",&n);

array();

insertion_sort();


    return 0;
}