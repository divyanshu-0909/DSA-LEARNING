// #include<iostream>
// using namespace std;
// void movezeros(int arr[],int n)
// {
//     int temp[n];
//     int j=0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]!= 0)
//         {
//         temp[j]=arr[i];
//         j++;
//         }
//     }
//     for(int i=0;i<j;i++)
//     {
//          arr[i]=temp[i];
//     }
//     for(int i=j;i<n;i++)
//     {
//         arr[i]=0;
//     }
// }
// int main()
// {
//     int n;
//     cout<<"enter number of elements in the array"<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elements of the array"<<" ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     movezeros(arr,n);
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i];
//     }
// }

// optimised one below 

#include<iostream>
using namespace std;
void movezeros(int arr[],int n)
{
     int j=-1;
     for(int i=0;i<n;i++)
     {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
     }
     if(j==-1) return;
     for(int i=j+1;i<n;i++)
     {
        if(arr[i] !=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
     }

}

int main()
{
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
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