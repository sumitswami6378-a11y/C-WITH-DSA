#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};

int main(){
int n,i ;
printf("ENTER THE NUMVER OF NODES =");
scanf("%d",&n);

struct node *head = NULL ;
struct node *temp,*last,*new ;
for(i=1 ; i<=n ; i++){
    new = (struct node*)malloc(sizeof(struct node));
    printf("enter data of %d NODE =",i);
    scanf("%d",&new->data);

    if(head == NULL){
        head = new ;
        last = new ;

    }
    else{

        last->next = new ;
        last = new ;
    }



}
last->next = head ;


printf("NODE WHICH YOU WANT TO INSERT = ");
new = (struct node*)malloc(sizeof(struct node));
printf("enter data of inserting node =");
scanf("%d", &new->data);


int pos ;
printf("ENTER THE POSITION WHERE YOU WANT TO INSERT THE NEW NODE = ");
scanf("%d",&pos);
temp = head ;
for(i=1 ; i < pos -1 ; i++){

    temp = temp->next ;

}

new->next = temp->next;
temp->next = new;
printf("after insertion ");
temp = head ;
printf("%d<-->", temp->data);
temp = temp->next ;

while(temp != head){

    printf("%d<-->",temp->data);
    temp = temp->next ;
}

printf("back to head");

return 0;
}