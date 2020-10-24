#include<iostream>
using namespace std;

void insertionSort(int *arr, int n)
{
    for(int i=1;i<n;i++)
    {
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && temp<arr[j])
        {
            arr[j+1] = arr[j];
            j -= 1;
        }
        arr[j+1] = temp;
    }
}

int main()
{
    int n = 8;
    int arr[n] = {45,21,69,5,26,87,63,43};
    cout<<"Array before Sorting: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n\n";
    insertionSort(arr,n);
    cout<<"Array after Sorting: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}




