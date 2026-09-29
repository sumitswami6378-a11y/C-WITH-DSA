#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next
};

struct node* current;
struct node* temp;
void duplicate(){

if(head == NULL){
    return head;
}
else{
    current = head;
    temp = current->next;
    while(temp != NULL){
        if(current->data == temp->data){
            current->next = temp->next;
            temp = temp->next;
        }
        else{
            current = temp;
            temp = temp->next;
        }
    }
    
}

}
int main(){

    int n;
printf("ENTER NUM OF NODES=");
scanf("%d",&n);
struct node *head = NULL;
struct node *new;
for(int i =1 ; i<=n ; i++){
    
    new = (struct node*)malloc(sizeof(struct node));
    printf("ENTER THE DATA OF THE %d NODE =",i);
    scanf("%d",&new->data);
    new->next = NULL;
    if(head == NULL){
        head = new;
    }
    else{
        new->next = new;
        new->next = NULL;
    }


duplicate();
    
return 0;

}
}
