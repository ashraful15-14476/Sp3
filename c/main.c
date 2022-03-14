void function(int value,int toadd)
{
    struct Node new_Node=(struct Node)malloc(sizeof(struct Node));
    new_Node->Ananta=toadd;
    new_Node->Ashraful=NULL;
    struct Node *cur=head;
    if(head->Ananta==value){
        new_Node->Ashraful=head;
        head=new_Node;
        return;
    }
    printf("here\n");
    int f=0;
    while(cur->Ashraful!=NULL){
        if(cur->Ashraful->Ananta==value){
            f=1;
            break;
        }
        cur=cur->Ashraful;
    }
    if(f==1){
        new_Node->Ashraful=cur->Ashraful;
        cur->Ashraful=new_Node;
        return;
    }
    printf("Node not found\n");
}

















/*#include <stdio.h>

struct node
{
    int data;
    struct node* next;
};

int main()
{
    system ("color fc");

    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    head = (struct node*)malloc(sizeof(head));
    second = (struct node*)malloc(sizeof(second));
    third = (struct node*)malloc(sizeof(third));

    head->data = 66;
    head->next = second;

    second->data = 88;
    second->next = third;

    third->data = 76;
    third->next = NULL;

    printlist (head);

    return 0;
}

void printlist(struct node* n)
{
    while (n!=NULL)
    {
        printf("%d ",n->data);
        n = n->next;
    }
}
*/
