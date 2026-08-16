#include<iostream>
using namespace std;

int find_element_index(int arr[] , int size , int user_input);

int main()
{
    int arr[] = {21,12,32,56,76,98,356,87,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int user_input;
    cout<<"Enter Number: ";
    cin>>user_input;

    int element_index = find_element_index(arr , size ,user_input);
    cout<<"Element Index: "<<element_index<<endl;
    return 0;

}

int find_element_index(int arr[] , int size , int user_input)
{
    for(int i=0; i<size; i++)
    {
        if(user_input == arr[i])
        {
            return i;
        }
    }
    return -1;
}