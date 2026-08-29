#include<iostream>
using namespace std;

void bubble_sort(int arr[] , int size);

int main()
{
    int arr[] = {9,7,8,1,4,2,3,6,10,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr , size);
    return 0;

}

void bubble_sort(int arr[] , int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-1; j++)
        {
            if(arr[j+1] < arr[j])
            {
                swap(arr[j] , arr[j+1]);
            }
        }
    }

    for(int k=0; k<size; k++)
    {
        cout<<arr[k]<<" ";
    }

}