#include<stdio.h>

int n;
int stack[100];
int num;
int top = -1 ;
void push(int num){
   
    if(top == n-1){
        printf("stack is full");
    }

    else{

        top++ ;
        stack[top] = num;
        printf("element inserted successfully");
    }

}

void pop(){
int item;
    if(top == -1){
        printf("stack is empy");

    }
    else{

        item = stack[top];
        top-- ;
        printf("ELEMENT DELETED SUCCESSFULLY");
    }

}
int main(){
    
    
    printf("enter size = ");
    scanf("%d",&n);

   


pop(10);


}
