#include<iostream>
using namespace std;
void movezeros(int arr[],int n)
{
    int temp[n];
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!= 0)
        {
        temp[j]=arr[i];
        j++;
        }
    }
    for(int i=0;i<j;i++)
    {
         arr[i]=temp[i];
    }
    for(int i=j;i<n;i++)
    {
        arr[i]=0;
    }
}
int main()
{
    int n;
    cout<<"enter number of elements in the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array"<<" ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    movezeros(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}