#include<iostream>
using namespace std;

void fibonacci_series_number(int arr[] , int size);

int main()
{
    int index;
    cout<<"Enter the index whose number to want: ";
    cin>>index;
    int size = index;
    

    int arr[45] = {0,1};
    
    for(int i=2; i<size; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }

    fibonacci_series_number(arr , size);
    

    return 0;
}

void fibonacci_series_number(int arr[] , int size)
{
    if(size == 0)
    {
        cout<<"At Index "<<size<<" "<<arr[size]<<" is present";   
        return;
    }

    for(int i=0; i<size; i++)
    {
        cout<<"Index "<<i<<" Value => "<<arr[i]<<endl;
    }

    cout<<"At Index "<<size<<" "<<arr[size-1]<<" is present";
}