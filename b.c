#include<stdio.h>
#include<stdlib.h>
struct node {

    int data ;
    struct node*next;
};
int main(){

    struct node*head;
    struct node*second;
    struct node*third;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third= (struct node*)malloc(sizeof(struct node));

    head->data = 6;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 2;
    third->next = NULL ;

    struct node*new;

    new = (struct node*)malloc(sizeof(struct node));

    printf("ENTER THE VALUE OF INSERTING NODE = ");
    scanf("%d",&new->data);
    new->next = NULL ;
    third->next = new ;

while(head !=NULL){

printf("%d<->", head->data);

head = head->next;

}


printf("NULL");


    return 0;
}