#include<iostream>
using namespace std;
int count =0;
int main()
{
  int n;
  cout<<"enter the number"<<endl;
  cin>>n;
  for(int i=1 ; i<=n ;i++)
  {
    if(n%i==0)
    {
        count++;
    }
  }
  if(count==2)
  {
    cout<<"the number is prime";
  }
  else {
    cout<<"the number is not prime";
  }
}