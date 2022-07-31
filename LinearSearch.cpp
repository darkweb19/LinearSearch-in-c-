//Linear Search works in both sorted and unsorted both...

#include <iostream>
using namespace std;

//Searching function which returns the index...
int LinearSearch(int arr[], int a, int key)
{
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

//driver main
int main()
{
    int a;
    int arr[a], key;

    cout << "Enter the number of elements : " << endl;
    cin >> a;

    cout << "Enter the elements : " << endl;
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    cout << "Key : " << endl;
    cin >> key;

    cout <<  "Index is: " <<LinearSearch(arr, a, key) << endl;
    return 0;
}

// Time complexity is : O(n)...