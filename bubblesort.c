#include<stdio.h>
int main(){
int a[100];
int n;
int temp;
printf("ENTER THE SIZE OF THE ARRAY ");
scanf("%d",&n );

printf("ENTER THE ELEMENTS OF THE ARRAY ");
for(int i=0; i<n ; i++){

    scanf("%d", &a[i]);
}
for(int i=0; i<n ; i++){

    printf("%d\n", a[i]);
}

for(int i=0; i<n ;i++){
    for(int j=0; j<n-i-1; j++){

        if(a[j] > a[j+1]){
            temp = a[j];
            a[j] = a[j+1];
            a[j+1]=temp;
        }
    }
}

for(int i=0; i<n ; i++){

    printf("%d", a[i]);
}


    return 0;
}