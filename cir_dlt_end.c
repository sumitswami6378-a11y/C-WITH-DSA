#include<stdio.h>
#include<stdlib.h>
struct node{

    int data;
    struct node *next ;
};
int main(){

    int i,n ;
    printf("ENTER THE NUMBER OF NODES = ");
    scanf("%d", &n);
    struct node *head = NULL ;
    struct node *new, *temp, *last ;

    for(i = 1 ; i<= n ; i++){

        new = (struct node*)malloc(sizeof(struct node));
        printf("ENTER THE VALUE OF NODE %d",i);
        scanf("%d", &new->data);
        
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

   
temp = head ;
    while(temp->next != last){

        temp = temp->next ;
    }
free(last);
last = temp ;
last->next = head;

printf("-------------------AFTER  DELETION----------------------------");

temp = head;
printf("%d<-->", temp->data);
temp = temp->next;

while(temp != head){

    printf("%d<-->", temp->data);
    temp = temp->next ;
}

printf("BACK TO HEAD ");


    return 0;
}