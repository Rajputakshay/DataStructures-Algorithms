#include<iostream>
using namespace std;
void binarySearch(int *arr, int target, int len)
{
    int low = 0, high = len - 1, mid;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(arr[mid] == target)
        {
            cout<<"Element "<<target<<" found at index "<<mid;
            return;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout<<"Element does not exist in the array.";
}

int main()
{
    int len;
    cout<<"Enter the length of the array: ";
    cin>>len;
    int arr[len];
    cout<<"Enter the elements of the array in sorted order: ";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target element to be searched: ";
    cin>>target;
    binarySearch(arr, target, len);
}