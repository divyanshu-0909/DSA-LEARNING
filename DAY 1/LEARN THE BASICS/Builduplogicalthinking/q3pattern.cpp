#include<iostream>
using namespace std;
void triangle_pattern(int n )
{
   for(int i=1;i<=n;i++)
   {
    for(int j=1;j<=i;j++)
    {
        cout<<j;
    }
    cout<<endl;
   }
}
int main()
{
    int n;
    cout<<"enter the number";
    cout<<endl;
    cin>>n;
    triangle_pattern(n);
}