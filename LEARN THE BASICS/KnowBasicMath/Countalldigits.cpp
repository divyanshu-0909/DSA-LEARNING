#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cout<<endl;
    cin>>n;
    int lastdigit;
    int count=0;
    while(n>0)
    {
        int lastdigit = n%10;
        count=count+1;
        n = n/10;
    }
    cout<<count;
}