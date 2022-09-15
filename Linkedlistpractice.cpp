#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    //constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    //destructor
    ~Node(){
        int value =this->data;
        //memory free
        if(this->next !=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is freed";
    }
};
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtPosition(Node *&head,Node*&tail, int position, int d)
{
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    // if(temp->next==NULL){
    //     insertAtTail(tail, d);
    //     return ;
    // }
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void deleteNode(int position, Node*&head){
    if(position==1){
        Node* temp =head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* prev = NULL;
        Node* curr = head;
        int cnt =1;
        while(cnt<=position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
   
}
int main()
{
    Node *node1 = new Node(5);
    Node *head = node1;
    Node *tail = node1;
    // cout << node1->data << " ";
    // cout << node1->next;
    insertAtHead(head, 10);
    insertAtTail(tail, 12);
    insertAtPosition(head,tail, 1, 15);
    insertAtPosition(head,tail, 4, 16);
    print(head);
    deleteNode(3,head);
    print(head);
}