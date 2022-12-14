#include<iostream>
using namespace std;
void merge(int arr[], int l,int mid,int u)
{
    int n1=mid-l+1,n2=u-mid;
    int a[n1], b[n2];

    for(int i=0;i<n1;i++)
    {
        a[i]=arr[l+i];
    }

     for(int i=0;i<n2;i++)
    {
        b[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=b[j];
            j++;k++;
        }
    }
    while(i<n1)
    {
        arr[k]=a[i];
        i++;
        k++;
    }

     while(j<n2)
    {
        arr[k]=b[j];
        j++;
        k++;
    }

}
void mergesort(int arr[],int l, int u)
{
    if(u>l)
    {
        int mid=(l+u)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,u);
        merge(arr,l,mid,u);
    }
}
int main()
{
    int arr[8]={12,309,2,5,6,9,1,44};
    mergesort(arr,0,7);
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<endl;
    }


}