#include<stdio.h>
int main(){

int a[100] , i , elem , pos , n ;

printf("ENTER THE SIZE OF THE ARRAY = ");
scanf("%d", &n);

printf("ENTER THE ELEMENTS OF THE ARRAY = ");
for(i=0 ; i<n ; i++){

    scanf("%d",&a[i]);
}

printf("ENTER THE ELE INSERTION OF THE ARRAY =");
scanf("%d", &elem);

printf("ENTER THE POSITION OF THE ARRAY WHERE INSERT ");
scanf("%d", &pos);

for(i=n; i>=pos ; i--){

    a[i] = a[i-1];
}

a[pos-1] = elem ;

printf("ARRAY AFTER THE INSERTION = ");

for( i=0; i<n ; i++){

    printf("%d\n", a[i]);
}



    return 0;
}