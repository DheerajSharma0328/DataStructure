#include<iostream>
#include<climits>
using namespace std;

int find_maximum_element(int arr[] , int size);

int main()
{
    int arr[] = {21,43,432,12,46,12};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maximum_element = find_maximum_element(arr , size);
    cout<<endl<<endl<<"Maximum Element: "<<maximum_element<<endl<<endl;
    return 0;

}

int find_maximum_element(int arr[] , int size)
{
    int ans = INT_MIN;
    for(int i=0; i<size; i++)
    {
        if(arr[i] > ans)
        {
            ans = arr[i];
        }
    }

    return ans;
}