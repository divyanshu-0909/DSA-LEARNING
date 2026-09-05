#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int count=0;
    int revN=0;
    while(n>0)
    {
        int lastdigit=n%10;
        count=count+1; // see logically it loooking beautifull to declare the count here as we can declare count anywhere in the loop as it is not related to any line of the code.
        n=n/10;
        revN= (revN * 10) + lastdigit; // see logically it loooking beautifull to declare the revN here as we can declare revN anywhere in the loop as it is not related to any line of the code.
    }
    cout<<"number of digits in the number is "<<count<<endl; // why cout here because if we will declare it inside the loop na , it will be repeating printing again n again thats why we want to print out the result at once only.
    cout<<"the reverse of the number is"<<" "<<revN;  // why cout here because if we will declare it inside the loop na , it will be repeating printing again n again thats why we want to print out the result at once only.
}