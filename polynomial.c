#include<stdio.h>
#include<stdlib.h>
struct node{
    int coeff,pow;
    struct node *next ;
};
int main(){
struct node *p1 = NULL;
struct node *p2 = NULL ;
struct node *res = NULL ;
struct node *temp ;

p1 = (struct node*)malloc(sizeof(struct node));
p1->coeff = 3;
p1->pow = 2;
p1->next = (struct node*)malloc(sizeof(struct node));
p1->next->coeff = 2;
p1->next->pow =1 ;

p1->next->next = NULL ;

p2 = (struct node*)malloc(sizeof(struct node));
p2->coeff = 4;
p2->pow = 2;

p2->next = (struct node*)malloc(sizeof(struct node));
p2->next->coeff = 3;
p2->next->pow = 1;

p2->next->next = NULL ;

res = (struct node*)malloc(sizeof(struct node));
res->coeff = p1->coeff + p2->coeff ;
res->pow = 2;

res->next = (struct node*)malloc(sizeof(struct node));
res->next->coeff = p1->next->coeff + p2->next->coeff ;
res->next->pow = 1;

res->next->next = NULL;

printf("DISPLAY");

temp = res ;
while(temp != NULL){
    printf("%d^%d",temp->coeff,temp->pow );
    temp = temp->next ;
    if(temp != NULL){
        printf("+");
    }
}

    return 0;
}