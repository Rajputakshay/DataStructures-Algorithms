#include<iostream>
using namespace std;

void mergeArrays(int low, int mid, int high, int *arr)
 {
     int p = low,q = mid + 1, tempArr[high+1];
     int i = 0;
     while (p<=mid && q <=high)
     {
         if(arr[p] >= arr[q])
         {
             tempArr[i] = arr[q];
             q += 1;
             i += 1;
         }
         else if(arr[p] <= arr[q])
         {
             tempArr[i] = arr[p];
             p += 1;
             i += 1;
         }
     }
     while (p<=mid)
     {
         tempArr[i] = arr[p];
         p += 1;
         i += 1;
     }
     while (q<=high)
     {
         tempArr[i] = arr[q];
         q += 1;
         i += 1;
     }
     int j = 0;
     for(int k=low;k<=high;k++)
     {
         arr[k] = tempArr[j];
         j += 1;
     }
 }

 void mergeSort(int low,int high,int *arr)
 {
     if(low<high)
     {
         int mid = (low + high)/2;
         mergeSort(low,mid,arr);
         mergeSort(mid+1,high,arr);
         mergeArrays(low,mid,high,arr);
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
    mergeSort(0,n-1,arr);
    cout<<"Array after Sorting: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


