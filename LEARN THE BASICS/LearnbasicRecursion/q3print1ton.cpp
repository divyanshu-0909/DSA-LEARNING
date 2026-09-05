// print 1 to n
#include<iostream>
using namespace std;
void printn(int i , int n)
{
    if(i>n)
    return;
    cout<<i<<endl;
    printn(i+1,n);
}
int main()
{
    int n;
    cout<<"enter  the number"<<endl;
    cin>>n;
    printn(1,n);
}