#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};
void insertathead(node* &head, int value)
{
    node* n = new node(value);
    n->next = head;
    head = n;
}
void insertattail(node* &head, int value)
{
    node *n = new node(value);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
bool search(node* &head, int value)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void deleteathead(node* &head)
{
    node *todelete = head;
    head = head->next;
    delete todelete;
}
void deletion(node* &head, int value)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deleteathead(head);
        return;
    }
    node *temp = head;
    while (temp->next->data != value)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
int size(node* &head)
{
    int c=0;
    if(head == NULL)
    {
        return c;
    }
    node *temp = head;
    while(temp!=NULL)
    {
        c++;
        temp  = temp->next;
    }
    return c;
}
node* rev(node* &head)
{
    node* prev = NULL;
    node* cur = head;
    node* next;
    while(cur!=NULL)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}
node* revk(node* &head, int k)
{
    node* prev = NULL;
    node* cur = head;
    node* next;
    int c=0;
    while(cur!=NULL&& c<k)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
        c++;
    }
    if(head!=NULL){
    head->next = revk(next, k);
    }
    return prev;
}
void dis(node* head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    node* head = NULL;
    insertathead(head, 5);
    insertattail(head, 6);
    dis(head);
    cout<<size(head);
    node* newhead = rev(head);
    dis(head);
    return 0;
}