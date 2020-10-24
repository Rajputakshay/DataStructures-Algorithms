#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int low, int high, int *arr)
{
    int pivot = arr[low],left = low+1,right = high;
    while(true)
    {
        while(arr[left] < pivot)
        {
            left += 1;
        }
        while(arr[right]>pivot)
        {
            right -= 1;
        }
        if(left > right)
        {
            break;
        }
        else
        {
            swap(&arr[left],&arr[right]);
        }
    }
    swap(&arr[low],&arr[right]);
    return right;
}

 void quickSort(int low,int high,int *arr)
 {
    if(low<high)
     {
         int pivot = partition(low, high, arr);
         quickSort(low,pivot-1,arr);
         quickSort(pivot+1,high,arr);
     }
 }


int main()
{
    int n = 8;
    int arr[n] = {45,21,6,52,26,87,63,43};
    cout<<"Array before Sorting: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n\n";
    quickSort(0,n-1,arr);
    cout<<"Array after Sorting: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}




