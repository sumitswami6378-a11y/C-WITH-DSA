#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *new, *temp, *next ,*last;
    struct node*head = NULL;
    struct node *prev = NULL ;
    struct node *current ;
    int n,i;
    printf("ENTER THE NODES=");
    scanf("%d", &n);

    for(i = 1 ; i<=n ; i++){
        new = (struct node*)malloc(sizeof(struct node));
        printf("ENTER THE DATA OF %d NODE =",i);
        scanf("%d",&new->data);
        new->next = NULL ;
        if(head == NULL){
            head = new ;
            last = new;
        }
        else{
            last->next = new ;
            last = new;
        }
    }

    printf("REVRESE THE STRING = ");

current = head ;

while(current != NULL){
    
    next = current->next ;
    current->next = prev;
    prev = current ;
    current = next ;
}


temp = prev ;
while(temp!= NULL){
    printf("%d<-->",temp->data);
    temp = temp->next ;
}

printf("NULL");
return 0;
}
