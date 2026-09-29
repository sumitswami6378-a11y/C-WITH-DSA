#include<stdio.h>
int stack[100];

int top = -1 ;
int size ;
void push(int n){
  
  
    if(top == size - 1){
        printf("stack is full");
    }
    else{
        top ++ ;
        stack[top] = n ;
        printf("%d element inserted successfuully\n",n);
    }
}

void pop(){
    int item;
    if(top == -1){
        printf("stack is empty");

    }
    else{
     item = stack[top];
     top-- ;
    printf("ELEMENT DELETED SUCCESSFULLY");
    }

}

void display(){

    if(top == -1){

        printf("stack is empty");
    }
    else{
        for(int i = top ; i>= 0; i--)
        printf("\n%d\n",stack[i]);

    }

}
void peek(){

    if(top == -1){
        printf("stack is empty");
    }
    else{
        printf("%d", stack[top]);
    }

}

int main(){

    printf("enter size=");
    scanf("%d",&size);

push(10);
push(15);
push(59);
display();
pop(59);
display();
peek();
}
