#include<iostream>
using namespace std;

void reverse_array(int arr[] , int size);

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverse_array(arr , size);
    return 0;
}

void reverse_array(int arr[] , int size)
{
    int new_size = size-1;
    int temp = 0;

    for(int i=0; i<size/2; i++)
    {
        
        temp = arr[new_size];
        arr[new_size] = arr[i];
        arr[i] = temp; 
        

        new_size--;
    }

    cout<<"Reversed Arrray is: ";

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}