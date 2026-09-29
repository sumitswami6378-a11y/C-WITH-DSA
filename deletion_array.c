#include<stdio.h>
int main(){

    int a[100];
    int n;
    int i;

printf(" ENTER THE SIZE OF THE ARRAY = ");
scanf("%d",&n);

printf("ENTER THE ELEMENTS OF THE ARRAY = ");
for(i=0 ; i<n ; i++){

    scanf("%d", &a[i]);

}
/*printf("DELETE THE ELEMENT AT THE END OF THE ARRAY =");
for( i=0 ; i<n-1 ; i++){

    printf("%d\n", a[i]);
}

  printf("DELETE THE ELEMENT AT THE BEGINNNING OF ARRAY");

for( i =0 ; i<n-1 ;i++){

    a[i] = a[i+1];
}
n=n-1 ;
printf("AFTER DELETION ");
for(i=0 ; i< n-1 ; i++){

    printf("%d \n", a[i]);
}*/

printf("deletion of the element at any position ");
int pos;
printf("ENTER THE DELTION ARRAY POSITION= ");
scanf("%d",&pos);

for(int i = pos -1; i< n ; i++){

    a[i] = a[i+1] ;
}
n=n-1 ;

printf("ARRAY AFTER DELETION ");
for(int i = 0 ; i<n ; i++){


    printf("%d ",a[i]);
}

    return 0;
}