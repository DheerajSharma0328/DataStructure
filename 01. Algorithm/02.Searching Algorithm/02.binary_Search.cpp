#include<iostream>
using namespace std;

void binary_search(int arr[] , int size , int user_input);

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int user_input;
    cout<<"Enter Value: ";
    cin>>user_input;

    binary_search(arr , size , user_input);
    return 0;

}

void binary_search(int arr[] , int size ,int user_input)
{
    int start = 0;
    int end = size-1;
    
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid] == user_input)
        {
            cout<<endl<<endl<<user_input<<" is at Index: "<<mid<<endl<<endl;
            return;
        }
        else if(arr[mid] < user_input)
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }

    }

    cout<<user_input<<" is not present in the Array";

    

}