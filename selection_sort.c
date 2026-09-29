#include<stdio.h>
int main(){
int i,j,a[100],n;
int temp;

printf("ENTER THE SIZE OF THE ARRAY= ");
scanf("%d",&n);

for(i = 0; i<n; i++){
    printf("ENTER THE DATA OF THE ARRAY a[%d]= ",i);
    scanf("%d",&a[i]);
}

printf("ARRAY\n");
for(i=0 ; i<n ; i++){
    printf("a[%d]=%d",i,a[i]);
}

printf("array sorting start\n");
for(i =0 ; i<n-1; i++){
for(j = i+1 ; j<n ; j++){
    if(a[i] > a[j]){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
}

printf("AFTER SORTING = ");
for(i = 0; i<n ;i++){
    printf("a[%d] = %d\n", i,a[i]);
}



    return 0;
}