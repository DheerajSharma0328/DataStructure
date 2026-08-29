#include<iostream>
using namespace std;

void selection_sort(int arr[] , int size);

int main()
{

    int arr[] = {9,7,8,1,4,2,3,6,10,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr , size);
    return 0;

}

void selection_sort(int arr[] , int size)
{
    int i,j;
    for(i=0; i<size; i++)
    {
        int index = i;
        int swap = 0;
        int smallest = arr[i];

        // for finding smallest element
        for(j=i+1; j<size; j++)
        {
            if(smallest > arr[j])
            {
                smallest = arr[j];
                index = j;
            }
        }

        swap = arr[i];
        arr[i] = arr[index];
        arr[index] = swap;

    }

    // Printing Array
    for(int k=0; k<size; k++)
    {
        cout<<arr[k]<<" ";
    }
    
}