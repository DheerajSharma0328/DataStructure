#include<iostream>
using namespace std;

void search_insert_position(int arr[] , int size);

int main()
{
    int arr[] = {1,3,5,7,8,10,12,14,16};
    int size = sizeof(arr) / sizeof(arr[0]);

    search_insert_position(arr , size);
    return 0;
 
}

void search_insert_position(int arr[] , int size)
{
    int start = 0;
    int end = size -1;
    
    int user_input;
    cout<<"Enter Number: ";
    cin>>user_input;

    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if( (arr[mid] == user_input) || (mid == 0 && user_input < arr[mid]) || (mid == size-1 && user_input > arr[mid]) || (user_input > arr[mid] && user_input < arr[mid + 1]))
        {
            if(arr[mid] == user_input)
                {
                    cout<<"Index of: "<<user_input<<" will be: "<<mid<<endl<<end;
                    return;
                }
            else if((mid == 0 && user_input < arr[mid]) || (mid == 0 && user_input == arr[mid]))
            {
                cout<<"Index of: "<<user_input<<" will be: "<<mid<<endl<<end;
                return;

            }
            else if(mid == size-1 && user_input > arr[mid])
            {
                cout<<"Index of: "<<user_input<<" will be: "<<mid+1<<endl<<end;
                return;

            }
            else{

                cout<<"Index of: "<<user_input<<" will be: "<<mid+1<<endl<<end;
                return;
            }
        }
        else if(arr[mid] > user_input)
        {
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }



}