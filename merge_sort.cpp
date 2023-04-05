#include<bits/stdc++.h>
using namespace std;
void marge(int *arr, int s, int e)
{
    int mid=(s+e)/2;
    int l1 = mid-s+1;
    int l2 = e-mid;

    int *first = new int[l1];
    int *second = new int[l2];

    int main = s;
    for(int i=0; i<l1; i++)
    {
        first[i] = arr[main++];
    }
    main = mid+1;
    for(int i=0; i<l1; i++)
    {
        second[i] = arr[main++];
    }

    int i=0,j=0;
    main=s;
    while(i<l1 && j<l2)
    {
        if(first[i]<second[j])
        arr[main++] = first[i++];
        else
        arr[main++] = second[j++];
    }
    while(i<l1)
    arr[main++] = first[i++];
    
    while(j<l2)
    arr[main++] = second[j++];

    delete []first;
    delete []second;
}
void margesort(int *arr, int s, int e)
{
    if(s>=e)
    {
        return;
    }

    int mid = (s+e)/2;
    //left part sort
    margesort(arr, s, mid);
    //right part sort
    margesort(arr, mid+1, e);

    marge(arr ,s, e);
}
int main()
{
    int n;
    cout<<"Enter the array size-";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    margesort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}