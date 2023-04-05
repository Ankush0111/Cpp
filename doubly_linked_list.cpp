#include<iostream>
using namespace std;
class node
{
    public:
        int data;
        node* prev;
        node* next;
        node(int value)
        {
            data = value;
            prev = NULL;
            next = NULL;
        }
};
void insertathead(node* &head, int value)
{
    node* n = new node(value);
    n->next = head;
    if(head!=NULL)
    {
    head->prev = n;
    }
    head = n;
}
void insertattail(node* &head, int value)
{
    if(head == NULL)
    {
        insertathead(head, value);
        return;
    }
    node* n = new node(value);
    node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
void deleteathead(node* &head)
{
    node* todelete = head;
    head = head->next;
    head->prev = NULL;
    delete todelete;
}
void deletion(node* &head, int value)
{
    if(value==1)
    {
        deleteathead(head);
        return;
    }
    node* temp = head;
    int c=1;
    while(temp!=NULL && c!=value)
    {
        temp = temp->next;
        c++;
    }
    temp->prev->next = temp->next;
    if(temp->next != NULL)
    {
        temp->next = temp->prev;
    }
    delete temp;
}
int size(node* &head)
{
    int l=0;
    node* temp = head;
    while(temp!=NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
node* kappend(node* &head, int value)
{
    node* newhead;
    node* newtail;
    node* tail=head;
    int l = size(head);
    int c=1;
    while(tail->next!=NULL)
    {
        if(c==l-value){
            newtail=tail;
        }
        if(c==l-value+1)
        {
            newhead=tail;
        }
        tail=tail->next;
        c++;
    }
    newtail->next=NULL;
    tail->next=head;
    return newhead;
}
void dis(node* &head)
{
    node* temp = head;
    while(temp!= NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    node* head = NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertathead(head,10);
    dis(head);
    deletion(head,1);
    dis(head);
    cout<<size(head)<<endl;
    
    return 0;
}