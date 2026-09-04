#include<iostream>
using namespace std;

void find_minimum_in_rotated_sorted_array(int arr[] , int size);

int main()
{
    int arr[] = {12,4,6,7,10,11};
    int size = sizeof(arr) / sizeof(arr[0]);

    find_minimum_in_rotated_sorted_array(arr , size);
    return 0;
}

void find_minimum_in_rotated_sorted_array(int arr[] , int size){

    int ans = arr[0];
    int start = 0;
    int end = size-1;

    while(start <= end)
    {
        int mid = start + (end - start)/2;

        if(arr[0] <= arr[mid])
        {
            start = mid + 1;
        }
        else{
            ans = arr[mid];
            end = mid - 1;
        }
    }

    cout<<endl<<endl<<"Minimum Element is: "<<ans<<endl<<endl;

}