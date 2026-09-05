//print n to 1
#include <iostream>
using namespace std;

void printNan(int n)
{
    if (n <= 0)
        return;
    cout << n << endl;
    printNan(n - 1);
}

int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    printNan(n);
}
