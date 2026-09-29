#include<stdio.h>

int a[100];
void linear(int n,int item){


    printf("ENTER THE DATA OF THE ARRAY=\n");
    
    for(int i =0; i<n; i++){

        printf("ENTER DATA a[%d]=",i);
        scanf("%d",&a[i]);
    }

    for(int i=0; i<n; i++){
        

        if(a[i] == item){

            printf("ELEMENT FOUND AT %d index is = a[%d]",i,a[i]);
            return ;
        }

      
    }

      
  printf("ELEMENT IS NOT FOUND ");
        

}

int main(){

linear(6,5);

return 0;
}
