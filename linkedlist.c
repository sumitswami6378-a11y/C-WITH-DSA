#include<stdio.h>
#include<stdlib.h>
struct node{

    int data;
    struct node*next
};

int main(){

struct node*head = NULL;
struct node new ;
printf("enter the value = ");
scanf("%d", &new.data);

new.next = NULL ;
struct node*temp = head ;

while(temp !=NULL){
printf("%d", temp);

temp = temp->next;


}
return 0;

}