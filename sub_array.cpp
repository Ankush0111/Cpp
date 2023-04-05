#include<iostream>
using namespace std;
int main()
{
    int n,sp,i,ep;
    int* arr = new int[n];
    cout<<"Enter the number of elements-";
    cin>>n;
    cout<<"enter elelments-";
    for(i=0; i<n; i++) 
    {
        cin>>arr[i];
    }
    cout<<"Sub arrays-"<<endl;
    for(sp=0;sp<n;sp++)
    {
        for(ep=sp;ep<n;ep++)
        {
            for(i=sp;i<=ep;i++)
            {
                cout<<arr[i]<<"\t";
            }
            cout<<endl;
        }
    }
    return 0;
}