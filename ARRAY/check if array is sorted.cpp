#include<bits/stdc++.h>
using namespace std;
bool checksorted(int arr[],int n)
{
    for(int i =1 ; i<n;i++)
    {
        if(arr[i-1]>arr[i])
        {
            return false;
        }
    }
    return false;

}
int main()
{
    int n;
    cout<<"enter the no of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the number of elements in the array"<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    cout<<checksorted(arr,n);
}