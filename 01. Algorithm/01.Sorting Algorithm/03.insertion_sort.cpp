#include<iostream>
using namespace std;

void insertion_sort(int arr[] , int size);

int main()
{
    int arr[] = {9,7,8,1,4,2,3,6,10,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr , size);
    return 0;

}

void insertion_sort(int arr[] , int size)
{
    
 for(int i=1; i<size; i++)
 {
    for(int j=i; j>0; j--)
    {
        if(arr[j] < arr[j-1])
        {
            swap(arr[j] , arr[j-1]);
        }
        else
        {
            break;
        }
    }

}   
    for(int k=0; k<size; k++)
    {
        cout<<arr[k]<<" ";
    }

}