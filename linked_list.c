#include <stdio.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *p;
    struct node a = {5, NULL};
    struct node b = {4, NULL};
    struct node c = {6, NULL};
    struct node d = {566, NULL};

    a.link = &b;
    b.link = &c;
    c.link = &d;
}