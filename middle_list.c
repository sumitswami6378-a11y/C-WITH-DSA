#include<stdio.h>
#include<stdlib.h>
struct node{

int data ;
struct node*next ;
struct node*prev ;

};
int main(){
int n,i ;
struct node*head = NULL ;
struct node *new,*temp,*last;
printf("ENTER THE NUMBER OF NODES = ");
scanf("%d",&n);

for(i=1 ; i<=n ; i++){

new = (struct node*)malloc(sizeof(struct node));

printf("ENTER THE DATA OF NODE %d=",i);
scanf("%d",&new->data);
new->next = NULL ;
new->prev = head ;

if(head == NULL){
    head = new;
    new->prev = head;
    new->next = NULL ;
    last = new; 
}

else{

    last->next = new ;
    new->prev = last ;
    new->next = NULL ;
    last = new ;

}
}
printf("<-------------BEFORE INSERTION----------------------->");
temp = head ;
while(temp != NULL){

    printf("%d  ", temp->data);
    temp = temp->next ;


}

struct node *slow = head ;
struct node *fast = head ;
while(fast != NULL && fast->next != NULL){

    fast = fast->next->next ;
    slow = slow->next ;
}


printf("%d**",slow->data);

return 0;
}