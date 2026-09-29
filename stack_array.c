#include<stdio.h>
int size;
int stack[100];
int top = -1;

void push(int n){

    if(top == size-1){
        printf("stack is full");

    }
    else{
        top++ ;
        printf("%d element inserted successfully\n",n);
        stack[top] = n;
    }
}

void pop(){

    if(top == -1){
        printf("stack is underflow");
    }
    else{
        printf("%d-- element delete successfully\n",stack[top]);
        top-- ;

    }
}

void peek(){
    if(top == -1){
        printf("stack is underflow");
    }
    else{
        printf("top element is %d ", stack[top]);
    }
}

void display(){
    if(top == -1){
        printf("stack is under flow");
    }
    else{
        for(int i= top ; i>=0 ; i--){
            printf("%d\n",stack[i]);
            printf("\n");
        }
    }
}

int main(){

printf("ENTER SIZE = ");
scanf("%d",&size);

push(10);
push(20);
push(85);
display();
pop();
display();

    return 0;
}