#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    char data;
    struct node*next;
};

int main(){

    char str[100];
    printf("ENTER THE DATA OF STRING:-");
    gets(str);

struct node*head = NULL;
struct node*new;
struct node*temp;

for(int i =0; i<strlen(str); i++){

    new= (struct node*)malloc(sizeof(struct node));
    new->data = str[i];
    new->next = head;
    head = new;
}

temp = head;

while(temp != NULL){
    printf("%c-",temp->data);
    temp = temp->next;
}




return 0;
}