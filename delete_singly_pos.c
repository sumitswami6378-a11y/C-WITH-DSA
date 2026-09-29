#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
int main(){

int n,i;
struct node*head = NULL;
struct node*new,*temp,*last;
int pos;
printf("ENTER THE NO. OF NODES= ");
scanf("%d",&n);

for(i=1 ; i<=n ; i++){

    new = (struct node*)malloc(sizeof(struct node));
    printf("ENTER THE DATA OF THE NODE %d",i);
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
printf("BEFORE deletionn");
temp=head;
struct node*prev;
while(temp != NULL){

    printf("%d--",temp->data);
    temp = temp->next ;
}
printf("ENTER THE POSITION WHERE TO BE DELETE = ");
scanf("%d", &pos);
temp = head;
for(i=1 ;i<pos ; i++){

    prev = temp ;
    temp = temp->next ;

}
prev->next = temp->next ;
free(temp);

printf(" ----------------------------------AFTER DELETION-------------");
temp = head ;
while(temp != NULL){

    printf("%d--",temp->data);
    temp=temp->next ;
}
printf("NULL");


    return 0;
}