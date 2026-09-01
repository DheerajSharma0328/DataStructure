#include<iostream>
using namespace std;

void sqrt(int number);

int main()
{
    int number;
    cout<<"Enter the Number: ";
    cin>>number;

    sqrt(number);
    return 0;
}

void sqrt(int number)
{
    int start = 0;
    int end = number;
    int ans = 0;
    while(start <= end)
    {
        int mid = start + (end - start)/2;

        if((long long)mid*mid <= number)
        {
            start = mid + 1;
            ans = mid;
        }
        else if((long long)mid*mid > number)
        {
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
    }

    cout<<"Sqrt of: "<<number<<" is: "<<ans;
}