#include<stdio.h>
int stack[100];

int top = -1 ;
int size ;

void push(int n){

    if(top == size-1){
        printf("stack is overflow");

    }
    else{
        top++ ;
        stack[top] = n ;
        printf("element %d inserted successfully ");
    }
}

void pop(){
 int item ;
    if(top == -1){
        printf("stack is empty ");
    }
    else{
        item  = stack[top];
         printf("element %d is removes out");
        top-- ;
       
    }
}

void display(){
   
    if(top == -1){

        printf("the stack is empty");
    }
    else{
        for(int i = top ; i>= 0 ; i--){
        printf("%d\n",stack[i]);
        }
    }

}

void top(){

    if(top == -1){
        printf("stack is empty ");
    }
    else{
        printf("%d is the top element ", stack[top]);
    }
}

int main(){


    printf("ENTER SIZE OF STACK ");
    scanf("%d", &size);
   push(10);
   push(20);
   push(100);
   
   display();

   pop();
   pop();

   display();

    return 0;
}