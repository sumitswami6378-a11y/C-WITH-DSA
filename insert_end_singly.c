#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node*next;
};

int main(){
int n,i;
printf("ENTER THE NUMBER OF NODES=");
scanf("%d", &n);

struct node*new,*temp,*last;
struct node*head = NULL ;
for(i=1 ; i<=n ;i++){

new = (struct node*)malloc(sizeof(struct node));
printf("ENTER THE DATA OF NODE %d = ",i);
scanf("%d", &new->data);
new->next = NULL;

if(head == NULL){
head = new ;
last = new ;

}
else{

last->next = new;
last = new;

}

}

printf("--------------------------------------BEFORE INSERTION----------------------------------------------------");
temp = head;
while(temp != NULL){
printf("%d\n",temp->data);
temp = temp->next;

}

new = (struct node*)malloc(sizeof(struct node));
printf("ENTER THE DATA OF THE INSERTION NODE = ");
scanf("%d",&new->data);
new->next = NULL ;
last->next = new ;
last = new ;

temp = head;
while(temp != NULL){
printf("%d<-->",temp->data);
temp = temp->next;

}

printf("NULL");
    return 0;
}