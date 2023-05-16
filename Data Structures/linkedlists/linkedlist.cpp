#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *start = NULL;

void display(struct Node *n)
{
    while (n->next != NULL)
    {
        cout << n->data;
        n = n->next;
    }
}
void displayr(struct Node *p){
    if(p!=NULL){
        cout<<p->data;
        displayr(p->next);
    }
}
int main()
{
    struct Node first = {14};
    struct Node sub1 = {15};
}
