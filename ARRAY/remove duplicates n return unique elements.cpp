#include<bits/stdc++.h>
using namespace std;

int uniqueelements(int arr[], int n)
{
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[j]!=arr[i])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}


int main()
{
    int n;
    cout<<"enter the number of elements in the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<uniqueelements(arr, n);



}