#include <stdio.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node a = {5, NULL};
    struct node b = {7, NULL};
    struct node c = {2, NULL};
    struct node d = {9, NULL};

    a.link = &b;
}