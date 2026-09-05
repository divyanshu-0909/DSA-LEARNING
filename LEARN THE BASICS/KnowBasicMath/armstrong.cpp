#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int sum=0;
    int dup=n;
    while(n>0)
    {
        int lastdigit = n%10;
        n=n/10;
        sum=sum+ (lastdigit*lastdigit*lastdigit); // it will calcualte for 3 digit number , not for 4 digit.
    }
    if(sum==dup)
    {
        cout<<"the number is armstrong ";
    }
    else
    {
        cout<<"the number is not armstrong";
    }
}