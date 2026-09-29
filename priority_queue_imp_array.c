// priority queue implement using array
#include<stdio.h>
#define size 5
int data[size];
int priority[size];
int i;

int elem =0;
void insert(int value,int p){
    if(elem == size){
        printf("QUEUE IS FULL\n");
        return ;
    }
    i = elem - 1;
    while(i>=0 && priority[i] > p){
        data[i+1] = data[i];
        priority[i+1] = priority[i];
        i-- ;
    }
    data[i+1] = value;
    priority[i+1] = p;
    
    elem ++;
}

void peek(){
    if(elem == 0){
        printf("queue is empty\n");
    }
    else{
        printf("%d--%d is peek element\n",data[0],priority[0]);
    }
}

void delete(){
    if(elem == 0){
        printf("queue is empty\n");
    }
    else{
       
        printf("%d--%d is deleted\n",data[i],priority[i]);
       for(int i =0; i<elem -1 ; i++){
         
         data[i] = data[i+1];
        priority[i] = priority[i+1];
       }
        elem--;
    }
}

void display(){
    if(elem == 0){
        printf("queue is empty\n");
    }
    else{
        for(int i=0 ; i<elem ; i++){
            printf("%d--%d\n",data[i],priority[i]);
        }
    }
}

int main(){
    printf("insert");
    insert(12,3);
    insert(1,3);
    insert(12,4);
    insert(11,1);
    insert(15,2);

    printf("display");

    display();
    printf("peek");
    peek();
    printf("peek");
    delete();
    delete();
    display();



return 0;
}