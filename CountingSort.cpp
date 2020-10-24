#include<iostream>
using namespace std;
void countSort(int *arr,int n,int max)
{
    int pos[max+1] = {0};
    int outputArray[n] = {0};
    for(int i=0;i<n;i++)
    {
        pos[arr[i]] += 1;
    }
    for(int i=1;i<max+1;i++)
    {
        pos[i] = pos[i-1] + pos[i];
    }
    for(int i=0;i<n;i++)
    {
        outputArray[pos[arr[i]] - 1] = arr[i];
        pos[arr[i]] -= 1;
    }
    for(int i=0;i<n;i++)
    {
        arr[i] = outputArray[i];
    }
}

int main()
{
    int n = 8;
    int arr[n] = {8,53,22,4,37,29,83,25};
    int max = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    cout<<"Array before Sorting: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n\n";
    cout<<"Array after Sorting: ";
    countSort(arr,n,max);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
