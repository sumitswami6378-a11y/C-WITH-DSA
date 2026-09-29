#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *next ;
};
int main(){
int n,i ;
printf("ENTER THE NUMBER OF NODES=");
scanf("%d",&n);

struct node *temp,*last,*new ;
struct node *head = NULL ;


for(i = 1 ; i<=n ; i++){
 new = (struct node*)malloc(sizeof(struct node));
 printf("enter the data of the node %d=",i);
 scanf("%d",&new->data);
 
 if(head == NULL){
    head = new ;
    last = new ;
 }

 else{

    last->next = new ;
    last = new ;
 }
    
}

last->next = head ;

temp = head;
head = head->next ;
last->next = head ;
free(temp);

temp = head;
printf("%d<-->",temp->data);
temp = temp->next ;

while(temp != head){

    printf("%d<-->", temp->data);
    temp = temp->next ;
}

printf("BACK TO HEAD");


    return 0;
}