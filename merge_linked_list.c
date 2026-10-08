#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node* next;
};

int main(){

    // FIRST LIST

    int n;
    printf("ENTER THE NUMBER OF NODES IN FIRST LIST=");
    scanf("%d",&n);

    struct node*temp;
    struct node*head = NULL;
    struct node*first = NULL;
    struct node*last = NULL;

    for (int i = 1; i <= n; i++)
    {
        struct node *new = (struct node*)malloc(sizeof(struct node));

        scanf("%d",&new->data);
        new->next = NULL;

        if (first == NULL && last == NULL)
        {
            head = new;
            first = new;
            last = new;
        }
        else{

            last->next = new;
            last = new;
        }
    }

    // PRINT FIRST LIST

    temp = head;

    printf("FIRST LIST = ");

    while (temp != NULL)
    {
        printf("%d-->",temp->data);
        temp = temp->next;
    }

    printf("NULL\n");


    // SECOND LIST

    int n2;
    printf("ENTER THE NUMBER OF NODES IN SECOND LIST=");
    scanf("%d",&n2);

    struct node*temp2;
    struct node*head2 = NULL;
    struct node*first2 = NULL;
    struct node*last2 = NULL;

    for (int i = 1; i <= n2; i++)
    {
        struct node *new2 = (struct node*)malloc(sizeof(struct node));

        scanf("%d",&new2->data);
        new2->next = NULL;

        if (first2 == NULL && last2 == NULL)
        {
            head2 = new2;
            first2 = new2;
            last2 = new2;
        }
        else{

            last2->next = new2;
            last2 = new2;
        }
    }

    // PRINT SECOND LIST

    temp2 = head2;

    printf("SECOND LIST = ");

    while (temp2 != NULL)
    {
        printf("%d-->",temp2->data);
        temp2 = temp2->next;
    }

    printf("NULL\n");


    return 0;
}