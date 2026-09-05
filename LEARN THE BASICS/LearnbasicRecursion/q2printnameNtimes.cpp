   // In this question we have to print our name n times using recusrion
#include<iostream>
using namespace std;
void printname(int i,int n)
{
    if(i>n)  
    return ;
    cout<<"Divyanshu"<<endl;
    printname(i+1,n);
}
 
int main(){
   int n;
   cout<<"enter the number"<<endl;
   cin>>n;
   printname(1,n);
}