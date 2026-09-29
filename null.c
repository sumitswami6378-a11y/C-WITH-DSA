#include<stdio.h>
int top = -1;
int stack[100];
int size ;

void push(int n){

    if(top == size - 1){
        printf("stack is full ");
    }

    else{
        top ++ ;
        printf("%d element inserted", n);
    }
}