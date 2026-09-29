#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};

int main(){
int n,i ;
printf("ENTER THE NUMVER OF NODES = ");
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

new = (struct node*)malloc(sizeof(struct node));
printf("enter data of inserting node =");
scanf("%d", &new->data);

last->next = new ;
new->next = head ;
last = new ;

printf("AFTER INSERING THE NODE = ");
temp = head ;
printf("%d<-->", temp->data);
temp = temp->next ;

while(temp != head){

    printf("%d<-->", temp->data);
    temp = temp->next ;
}
printf("back to head ");


    return 0;
}