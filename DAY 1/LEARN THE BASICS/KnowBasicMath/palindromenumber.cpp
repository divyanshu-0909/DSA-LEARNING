#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int original = n;
    int rev=0;
    while(n>0)
    {
        int lastdigit=n%10;
        n=n/10;
        rev=(rev*10) + lastdigit;
       
    }
    if(rev==original) // why oigial i have taken as n will go to 0 at end , so we need to store the duplicate of this as to compare with the original one
    {
    cout<<"the number is palindromic";
    }
    else {
    cout<<"the number is not palindromic";
    }
   
}