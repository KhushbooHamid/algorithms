#include<iostream>
using namespace std;
void swap(int arr[],int i,int j)
{
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition(int arr[],int l,int r)
{
    int pivot=arr[r];
    int i=l-1,j=l;
    for(j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}
void qsort(int arr[],int l,int r)
{
    if(l<r)
    {
        int pi=partition(arr,l,r);
        qsort(arr,l,pi-1);
        qsort(arr,pi+1,r);
    }
}
int main()
{
    int arr[5]={31,4,7,6,10};
    qsort(arr,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
}