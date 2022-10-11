#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int display(struct node *first) 
{
    struct node *p;
    p = first;

    while (p -> next != NULL)
    {
        printf("\t %d", p -> data);
        p = p -> next;
    }
    printf("\t %d", p -> data);
    return 0;
}

struct node * getList()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));

    struct node *second;
    second = (struct node *)malloc(sizeof(struct node));

    struct node *third;
    third = (struct node *)malloc(sizeof(struct node));

    struct node *fourth;
    fourth = (struct node *)malloc(sizeof(struct node));

    head -> data = 20;
    head -> next = second;
    
    second -> data = 30;
    second -> next = third;

    third -> data = 11;
    third -> next = fourth;

    fourth -> data = 33;
    fourth -> next = NULL;
    
    return head;
}

int main()
{
    // struct node *h;   
    // h = getList()

    display(getList());
    return 0;
}
