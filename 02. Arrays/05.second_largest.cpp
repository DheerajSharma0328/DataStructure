#include<iostream>
#include<climits>
using namespace std;

int second_largest(int arr[] , int size);
int largest_element(int arr[] , int size);

int main()
{
    int arr[] = {10,2,3,19,6,17,17,4,5,19};
    int size = sizeof(arr) / sizeof(arr[0]);

    int second_largest_element = second_largest(arr , size);
    cout<<endl<<endl<<"Second Largest Element: "<<second_largest_element<<endl<<endl;
    return 0;
}

int second_largest(int arr[] , int size)
{
    int largest = largest_element(arr , size);
    int second_largest_element = INT_MIN;

    for(int i=0; i<size; i++)
    {
        if(arr[i] < largest && arr[i] > second_largest_element && arr[i] != largest)
        {
            second_largest_element = arr[i];
        }
    }

    return second_largest_element;
}

int largest_element(int arr[] , int size)
{
    int largest = INT_MIN;
    for(int i=0; i<size; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}
