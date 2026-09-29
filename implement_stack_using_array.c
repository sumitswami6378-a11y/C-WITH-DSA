#include<stdio.h>
int size;
int stack[100];
int top = -1 ;
int n;

void push(int n){
    if(top == size - 1){
        printf("stack is full ");
    }
    else{
        top ++ ;
        stack[top] = n;
        printf("%d element inserted successfully\n ", n);

    }
}
void pop(){
    if(top == -1){
        printf("stack is empty");
    }
    else{
        printf("%d element is deleted successfully\n",stack[top]);
        top -- ;
    }
}

void peek(){
    if(top == -1){
        printf("stack is empty");
    }
    else{
        printf("%d is the top element\n",stack[top]);
    }
}

void display(){
    if(top == -1){
        printf("stack is empty ");
    }
    else{
        for (int i = top ; i >=0 ; i-- ){

            printf("%d\n",stack[i]);
        }
    }
}
int main(){
printf("ENTER THE SIZE = ");
scanf("%d",&size);

push(10);
push(1);
push(15);
push(14);
push(11);

display();
pop();
pop();
display();

    return 0;
}