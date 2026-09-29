#include<stdio.h>
#include<stdlib.h>
struct node {

int data;
struct node*next;

};
int main(){
struct node*head,*second,*third,*temp,*new;

head = (struct node*)malloc(sizeof(struct node));
second = (struct node*)malloc(sizeof(struct node));
third = (struct node*)malloc(sizeof(struct node));


head->data = 4;
head->next = second;

second->data = 8;
second->next = third;

third->data = 5;
third->next =NULL;
/*

while(head != NULL){
    printf("%d\n",head->data);
    head= head->next;
}
printf("NULL");
*/

printf("                   ----> AFTER DELETION    <----   ");
temp = head;
head = head->next ;
free(temp);

temp=head;

while(temp != NULL){

printf("%d<-->",temp->data);

temp = temp->next ;

}

printf("NULL");

    return 0;
}
