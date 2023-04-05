#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int value) 
    {
        data=value;
        next=NULL;
    }
};
void insertathead(node* &head, int value)
{
    node* n = new node(value);
    if (head == NULL)
    {
        n->next=n;
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}
void insertattail(node* &head, int value)
{
    if (head == NULL)
    {
       insertathead(head, value);
       return;
    }
    node* n = new node(value);
    node* temp = head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}
void deleteathead(node* &head)
{
    node* temp = head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    node* todelete=head;
    temp->next=head->next;
    head=head->next;
    delete todelete;
}
void deletion(node* head, int pos)
{
    if(pos==1)
    {
        deleteathead(head);
        return;
    }   
    node* temp=head;
    int c=1;
    while(c!=pos-1)
    {
        temp=temp->next;
        c++;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
 int size(node* &head)
{
    int c=0;
    if(head==NULL)
    {
        return c;
    }
    node* temp=head;
    do
    {
        c++;
        temp=temp->next;
    }while (temp!=head);
    
    return c;
}
int rev(node* head)
{
    
}
void dis(node* head)
{
    node* temp=head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}
int main()
{
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    dis(head);
    insertathead(head,5);
    dis(head);
    deletion(head,5);
    dis(head);
    cout<<size(head)<<endl;
    return 0;
}