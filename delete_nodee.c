#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next
};
int main(){
struct node*head,*second,*third,*temp;

head = (struct node*)malloc(sizeof(struct node));
second = (struct node*)malloc(sizeof(struct node));
third = (struct node*)malloc(sizeof(struct node));


printf("ENTER THE VALUE OF FIRST NODE = ");
scanf("%d",&head->data);
printf("ENTER THE VALUE OF second NODE = ");
scanf("%d",&second->data);
printf("ENTER THE VALUE OF third NODE = ");
scanf("%d",&third->data);

head->next = third;

third->next = NULL ;

temp = head ;
head = head->next;
free(temp);

temp = head ;

while (temp != NULL){

    printf("%d\n",temp->data);
    temp = temp ->next ;
}
printf("NULL");


    return 0;
}