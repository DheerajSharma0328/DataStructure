#include<iostream>
using namespace std;

int missing_number(int arr[] , int size);

int main()
{
    int arr[] = {1,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int number = missing_number(arr , size);
    cout<<endl<<endl<<"Missing number is: "<<number<<endl<<endl;
    return 0;
}

int missing_number(int arr[] , int size)
{
    int sum_of_array = 0;
    int natural_number = size + 1;
    int sum_of_natural_number = natural_number*(natural_number+1)/2;
  

    for(int i=0; i<size; i++)
    {
        sum_of_array = sum_of_array + arr[i];
    }

  

    int ans = sum_of_natural_number - sum_of_array;
    return ans;
}