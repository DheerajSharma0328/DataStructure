#include<iostream>
using namespace std;

void first_and_last_position_of_element(int arr[] , int size);
int  left_index(int arr[] , int size , int  mid , int user_input);
int  right_index(int arr[] , int size , int mid , int user_input);

int main()
{
    int arr[] = {5,6,6,6,6,7,7,7,7,7,7,8,8,9,9,9,9,9,9,9,9,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);

    first_and_last_position_of_element(arr , size);
    return 0;
}

void first_and_last_position_of_element(int arr[] , int size)
{
    int user_input;
    cout<<"Enter Number: ";
    cin>>user_input;

    int start = 0;
    int end = size-1;
    
    while(start <= end)
    {
        int mid = start + (end - start) /2;

        if(user_input == arr[mid])
        {
            int left_position = left_index(arr , size , mid ,user_input);
            int right_position = right_index(arr , size , mid, user_input);
            cout<<endl<<"First Occurance is: "<<left_position<<" Last Occurance is: "<<right_position<<endl<<endl;
            return;
        }

        else if(user_input < arr[mid])
        {
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
    }

    cout<<endl<<endl<<"Number not Found -1"<<endl<<endl;
    return;


}

int  left_index(int arr[] , int size , int  mid ,int user_input)
{
    int  left_position = mid;
    int start = 0;
    int end = mid-1;
    while(start <= end)
    {
        int mid = start + (end - start) /2;

        if(arr[mid] == user_input)
        {
            left_position = mid;
        }

        end = mid -1;
    }

    return left_position;

}

int  right_index(int arr[] , int size , int mid ,int user_input)
{
    int  right_position = mid;
    int start = mid + 1;
    int end = size-1;
    while(start <= end)
    {
        int mid = start + (end - start) /2;

        if(arr[mid] == user_input)
        {
            right_position = mid;
        }

        start = mid + 1;
    }

    return right_position;

}