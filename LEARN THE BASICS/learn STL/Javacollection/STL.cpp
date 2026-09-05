/*LIST CONTAINER*/
// #include<iostream>
// #include<vector>
// #include<list>

// using namespace std;

// int main() {
//     list<int> l;
//     l.push_back(1);
//     l.push_back(2);
//     l.push_front(3);
//     l.push_front(3);

//     for(int val : l)
//     {
//         cout << val <<" ";
//     }
//     cout<< endl;
// }

/*NOW LETS STDY AND CREATE A DEQUE*/

// #include<iostream>
// #include<deque>
// using namespace std;

// int main (){
//     deque<int> d={1,2,35};
//     for(int val : d)
//     {
//         cout<<val <<" ";
//     }
//     cout<<endl;
//     return 0;
// }


// NOW LET US STUDY A SPECIAL CHRACTER IN C++ WHICH IS PAIR 

// #include<iostream>
// using namespace std;
// /*for pair , we do not need to declare library for pair*/

// int main (){
//     pair<int,int > p ={1,2};
//     cout<<p.first<<endl;
//     cout<<p.second<<endl;
//     return 0;
// }

/*may more stl conatiemrs are there i have written in the copy in form of notes better to see the copy for more containers*/

 

     /*FROM HERE  WE NEED TO START THE ALGORITHUM in STL*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    // int arr[5]={1,8,3,7,4};
    vector <int> vec = {};
    sort(vec.begin(),vec.end());
    for(int val : vec)
    {
        cout<<val<<" ";
    }
    
}



 

