#include<iostream>
using namespace std;

void peak_index_mountain_array(int arr[] , int size);

int main()
{
    int arr[] = {2,4,6,8,7,6,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    peak_index_mountain_array(arr , size);
    return 0;

}

void peak_index_mountain_array(int arr[] , int size)
{
    int start = 0;
    int end = size - 1;

    while(start <= end)
    {
        int mid = end + (start - end)/2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid +1])
        {
            cout<<"peak_index_mountain_array: "<<mid<<endl<<endl;
            return;
        }
        else if(arr[mid] < arr[mid+1])
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

    }

    cout<<-1;
}