#include<bits/stdc++.h>
using namespace std;
int largest(int arr[],int n)
{
     int largest=arr[0];
     for(int i=0;i<n;i++)
     {
           if(arr[i]>largest)
           {
            largest=arr[i];
           }
     }
     return largest;
}
int main()
{
    int n;
    cout<<"enter no of elements in the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array"<<" "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<largest(arr,n);

}