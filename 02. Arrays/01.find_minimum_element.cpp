#include<iostream>
#include<climits>
using namespace std;

int find_minimum_element(int arr[] , int size);

int main()
{
    int arr[] = {4,6,10,5,12,11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int minimum_element = find_minimum_element(arr , size);
    cout<<endl<<"Minimum Element: "<<minimum_element<<endl;
    return 0;
}

int find_minimum_element(int arr[] , int size)
{
    int ans = INT_MAX;
    
    for(int i=0; i<size; i++)
    {
        if(arr[i] < ans)
        {
            ans = arr[i];
        }
    }

    return ans;
}