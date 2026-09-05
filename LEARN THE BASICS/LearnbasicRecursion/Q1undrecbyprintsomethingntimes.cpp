/* TODAY I WILL BE LEARNING Recursion */
// #include<iostream>
// using namespace std;
// void f()
// {
//     cout<<1<<endl;
//     f(); 
// }
// int main()
// {
//     f(); // stack overflow will come here as no specific condition is there.
// }

   

   // NOW LET SEE THE BASE CONDITION HOW DOES IT GET EXECUTED.

#include<iostream>
using namespace std;
int count=0;
void f()
{
    if(count==5)
    return;
    cout<<count<<endl;
    count++;
    f();
}
int main()
{
    f();
}

 // so in this session what is learn  :- 
                                         // what is recursion ?
                                         // what is base condition ?
                                         // what is stack overflow ?
                                         