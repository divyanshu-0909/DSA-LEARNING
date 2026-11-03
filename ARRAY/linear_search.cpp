#include <iostream>
using namespace std;
void linearsearch(int arr[], int n)
{
    int num = 4;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            cout << i;
        }
    }
}

int main()
{
    int n;
    cout << "enter the number of elements in the array" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    linearsearch(arr, n);
}