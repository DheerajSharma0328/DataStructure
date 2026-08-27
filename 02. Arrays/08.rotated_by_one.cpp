#include<iostream>
using namespace std;

void rotated_by_one(int arr[] , int size);

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    rotated_by_one(arr , size);
    return 0;
}


void rotated_by_one(int arr[] , int size)
{
    int tempfront = 0;
    int tempback = 0;

    for(int i = size-1; i>=1; i--)
    {
        tempback = arr[i];
        tempfront = arr[i-1];

        arr[i-1] = tempback;
        arr[i] = tempfront;

    }

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

}