#include<iostream>
using namespace std;

void linear_search(int arr[] , int size , int user_input);

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int user_input;
    cout<<"Enter Value: ";
    cin>>user_input;

    linear_search(arr , size , user_input);
    return 0;

}

void linear_search(int arr[] , int size ,int user_input)
{
    
    for(int i=0; i<size; i++)
    {
        if(arr[i] == user_input)
        {
            cout<<endl<<endl<<user_input<<" is at Index: "<<i<<endl<<endl;
            return;
        }
    }

    cout<<user_input<<" is not present in the Array";

    

}