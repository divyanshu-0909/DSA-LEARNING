#include <bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    for(int i=1 ;i<=n;i++)
    {
    for(int j=1;j<=i;j++)
    {
        cout<<"*";
    }
    cout<<endl;
        
    }
    for(int i=n ;i>0 ;i--)
    {
        for(int j=1 ;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the number";
    cout<<endl;
    cin>>n;
    pattern(n);
}