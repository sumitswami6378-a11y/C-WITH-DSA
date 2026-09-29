#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
int main(){
int n,i;

struct node*new;
struct node*head = NULL;
struct node*temp ;
printf("ENTER THE NUMBER OF NODES = ");
scanf("%d",&n);

for(i=1 ; i<=n ; i++){

    new = (struct node*)malloc(sizeof(struct node));
    printf("ENTER THE VALUE OF NODE %d = ",i);
    scanf("%d",&new->data);
    new->next = NULL ;
if(head == NULL){

    head = new ;
    temp = head ;
}
else{

    temp->next = new ;
    temp =new ;
}

}

temp->next =head ;
temp =head ;
while(temp->next !=head){
    printf("%d<->",temp->data);
    temp = temp->next ;
}


printf("%d<-> back to head",temp->data);

    return 0;
}