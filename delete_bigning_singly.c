#include<stdio.h>
#include<stdlib.h>
struct node{
int data ;
struct node*next;

};
int main(){
int n , i ;
printf("ENTER THE NUMBER OF NODES = ");
scanf("%d", &n);
struct node*head = NULL ;
struct node*new,*temp,*last;

for(i=1 ; i<=n ; i++){

    new = (struct node*)malloc(sizeof(struct node));
    printf("enter the data %d node = ",i);
    scanf("%d",&new->data);
    new->next = NULL ;


    if(head == NULL){

        head = new ;
        last = new ;

    }
    else{

        last->next = new;
        last = new ;
    }

}
temp = head ;

printf("<---------------BEFORE DELETION-------------------->");
while(temp != NULL){

    printf("%d  ", temp->data);
    temp = temp->next ;
}

printf("<-----------DELETION---------------->");

temp = head ;
head = head->next ;
free(temp);
free(&temp);

temp = head ;
while(temp != NULL){
printf("%d<-->", temp->data);
temp = temp->next ;

}
printf("NULL");

    return 0;
}