#include<stdio.h>
int a[100];
int linear(int n,int element){

    for(int i = 0; i<n ; i++){
        printf("ENTER THE DATA OF a[%d] = ",i);
        scanf("%d",&a[i]);
    }

    for(int i =0 ; i<n ; i++){
        if(a[i] == element){
            printf("ELEMEMNT FOUND AT %d LOCATION",i);
            
        }
        
    }
    printf("element does not exist");
}

int main(){
linear(5,8);
linear(5,56);
linear(5,6);

    return 0;
}