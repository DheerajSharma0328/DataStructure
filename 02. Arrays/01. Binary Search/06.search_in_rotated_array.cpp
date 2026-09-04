#include<iostream>
using namespace std;

void search_in_rotated_array(int arr[] , int size);

int main()
{
    int arr[] = {4,5,6,7,8,9,10,1,2,3};
    int size = sizeof(arr) / sizeof(arr[0]);

    search_in_rotated_array(arr , size);
    return 0;
}

void search_in_rotated_array(int arr[] , int size)
{
    int start = 0;
    int end = size-1;
    int target ;
    cout<<"Enter Number: ";
    cin>>target;
    int index = -1;
    
    while(start<=end)
    {
        int mid = start + (end - start)/2;

        // Target found
        if (arr[mid] == target)
        {
            cout << "Target Index is: " << mid << endl;
            return;
        }

        // Left half is sorted
        if (arr[start] <= arr[mid])
        {
            // Target lies inside the sorted left half
            if (arr[start] <= target && target < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        // Right half is sorted
        else
        {
            // Target lies inside the sorted right half
            if (arr[mid] < target && target <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    
    
    }

    if(index == -1)
    {
        cout<<"Number does not exist: "<<endl;
    }
}