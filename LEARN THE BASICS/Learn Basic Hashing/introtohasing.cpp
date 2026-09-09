// let us take one example that i have to find out certain numbers  in the array that how many times it is appearing using hashing 
   // introduction , initial problem , first apporach to search elements , what is hashing , precomputation.
#include<iostream> 
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    //pre computation
    int hash[13]={0};  // it means hash has 13 elements of which i have initialozed its all indeex value to 0;
    //now let us run a for loop from 0th index to last index 
    for(int i=0 ; i<n ;i++)
    {
        hash[arr[i]] += 1;   // hash aary ready after the pre compuation 
    }
    int q;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
        // this is called as a fetch
        cout<<hash[number]<<endl;
    }
}