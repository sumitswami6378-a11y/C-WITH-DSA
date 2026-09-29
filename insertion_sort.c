#include<stdio.h>
int main(){
int a[100];
int i,j;
int n;
int key;

printf("ENTER THE SIZE OF THE ARRAY = ");
scanf("%d", &n);

for(i = 0 ; i<n ;i++){
    printf("ENTER THE DATA a[%d]",i);
    scanf("%d",&a[i]);
}
printf("print the array = ");
for(i=0 ; i<n; i++){
    printf("a[%d] = %d\n", i,a[i]);
}

printf("sort the array = \n");
for(int i= 1; i<=n ; i++){
    key = a[i];
    j = i-1 ;

    while(j>=0 && a[j] > key){
  
        a[j+1] = a[j];
        j-- ;

    }
    a[j+1] = key;
}

printf("array after sorted = \n");
for(int i = 0 ; i<n ; i++){
    printf("a[%d] = %d\n",i,a[i]);
}





    return 0;
}