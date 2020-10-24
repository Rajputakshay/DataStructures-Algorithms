#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int *arr, int n)
{
    int index_of_min;
    for(int i=0;i<n-1;i++)
    {
        index_of_min = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[index_of_min])
            {
                index_of_min = j;
            }
        }
        swap(&arr[i],&arr[index_of_min]);
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
    selectionSort(arr,n);
    cout<<"Array after Sorting: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}



