#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *arr, int n)
{
    for(int i=0;i<n-1;i++)
    {   bool swapped = false;
        for(int j=0;j<n-i-1;j++)
        {
           if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            break;
        }
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
    bubbleSort(arr,n);
    cout<<"Array after Sorting: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}




