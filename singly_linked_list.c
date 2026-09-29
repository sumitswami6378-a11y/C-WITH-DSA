#include<stdio.h>
#include<stdlib.h>
struct node{

    int data;
    struct node*next;
};
int main(){
struct node*new;
struct node*head = NULL;
struct node*temp ;

int n,i;
printf("ENTER THE VALUE OF NODE =");
scanf("%d",&n);
for(i=1 ; i<=n ; i++){
new = (struct node*)malloc(sizeof(struct node));
printf("enter the value of node %d = ",i);
scanf("%d", &new->data);
new->next = NULL;
if(head == NULL){

    head = new ;
    temp = head;
}
else{
temp->next = new ;
temp =new ;
}
}

temp = head ;
printf("LINKED LIST IS = ");
while(temp != NULL){

    printf("%d<->",temp->data);
    temp = temp->next ;
}
printf("NULL");

return 0;
}