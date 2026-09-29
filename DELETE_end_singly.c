#include<stdio.h>
#include<stdlib.h>
struct node{

    int data;
    struct node*next;

};

int main(){
int n,i;
printf("ENTER THE NUMBER OF NODES = ");
scanf("%d",&n);

struct node*new,*last,*temp;
struct node*head = NULL ;

for(int i = 1; i<=n ; i++){

new = (struct node*)malloc(sizeof(struct node));

    printf("ENTER THE %d NODE DATA = ",i);
    scanf("%d",&new->data);
    new->next = NULL ;

    if(head == NULL){
    head = new ;
    last = new ;


    }
    else{

        last->next = new ;
        last = new ;
    }
}

temp = head ;
while(temp->next != last){
    temp = temp->next ;
}
free(last) ;
last = temp ;
last->next = NULL ;

temp = head ;

printf("AFTER THE INSERTION =  ");
while(temp != NULL){

    printf("%d<-->",temp->data);
    temp = temp->next ;
}
printf("NULL");

    return 0;
}