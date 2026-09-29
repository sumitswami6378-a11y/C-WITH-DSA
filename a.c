#include<stdio.h>
#include<stdlib.h>
struct node {

    int data;
    struct node*next;
};

int main(){
struct node*head;
struct node*second;
struct node*third;

head = (struct node*)malloc(sizeof(struct node));
second = (struct node*)malloc(sizeof(struct node));
third = (struct node*)malloc(sizeof(struct node));

head->data = 4;
head->next =second;

second->data = 6;
second->next = third;

third->data = 9;
third->next = NULL ;

struct node*new;
new = (struct node*)malloc(sizeof(struct node));
new->data =12;
new->next = head;
head = new;

while(new != 0){

    printf("%d   ",new->data);

    new = new->next;

}

printf("NULL");



    return 0;
}