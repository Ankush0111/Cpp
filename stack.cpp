#include<iostream>
using namespace std;
#define n 100
class stack
{
    public:
        int* arr;
        int top;
        stack()
        {
            arr = new int[n];
            top=-1;
        }
        void push(int x)
        {
            if(top==n-1)
            {
                cout<<"stack overflow"<<endl;
                return;
            }
            top++;
            arr[top] = x;
        }
         void pop()
         {
            if(top==n-1)
            {
                cout<<"stack overflow"<<endl;
                return;
            }
            top--;
        }
        int Top()
        {
            if(top==-1)
            {
                cout<<"No element in stack"<<endl;
                return -1;
            }
            return arr[top];
        }
        bool Empty()
        {
            return top==-1;
        }
};
int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4); 
    cout<<s.Top()<<endl; 
    s.pop();
    cout<<s.Top()<<endl;
    s.pop();
    cout<<s.Top()<<endl;
    return 0;
}