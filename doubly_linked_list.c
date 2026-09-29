#include<stdiO.h>
#include<stdlib.h>
struct node{

    int data;
    struct node*prev;
    struct node*next ;
};

int main(){
int n,i;
struct node*new;
struct node*head = NULL ;
struct node*temp ;
printf("ENTER THE NUMBER OF NODES = ");
scanf("%d", &n);
for(i=1 ; i<=n ; i++){

    new = (struct node*)malloc(sizeof(struct node));
    printf("ENTER THE VALUE OF NODE %d = ",i);
    scanf("%d", &new->data);
    new ->prev = NULL ;
    new ->next = NULL ;
    if(head == NULL){
        head = new ;
        temp = head ;

    }
    else{
        temp->next = new ;
        temp->prev = temp ;
        temp = new;
    }
}

temp = head ;
printf("LINKED LIST IS = ");
while(temp != NULL){
    printf("%d<->",temp->data);
    temp =temp->next ;
}
printf("NULL");
printf("%d",temp->data);

return 0;
}