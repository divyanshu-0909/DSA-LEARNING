#include<bits/stdc++.h>
using namespace std;
/*this is call by value better prefer to the notes */
void funtoprint1toN(int n){
           int i=1;
           while(i<=n)
           {
            cout<<i<<endl;
            i++;
           }
}

int main()
    {
        int n;
        cout<<"enter the number"<<endl;
        cin>>n;
        funtoprint1toN(n);
        return 0;

    }