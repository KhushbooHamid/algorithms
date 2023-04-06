#include<iostream>
using namespace std;
#define max 100
int bs(int A[],int item,int lb,int ub)
{
    int mid=(lb+ub)/2;
   if(lb<=ub)
   {
    if(item<A[mid])
    bs(A,item,lb,mid-1);
   
   
   else if(item>A[mid])
   bs(A,item,mid+1,ub);
   
   else
   {
   return mid;
   }
   }
   return -1;
       
}
int main()
{
    int A[max];
    int n,i,item;
    cout<<"enter the size";
    cin>>n;
    cout<<"enter the elements";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"enter the item";
    cin>>item;
    int p;
    p=bs(A,item,0,n-1);
    if(p==-1)
    cout<<"not found";
    
    else
    cout<<"found at "<<p;

}