#include<iostream>
using namespace std;
#define max 100
/*void bs(int A[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    cout<<A[i]<<endl;
}
*/
void ss(int a[],int n)
{
    int min=a[0],pos=0,temp;
    for(int i=0;i<n-1;i++)
    {  
        min=a[i];
        pos=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                
                min=a[j];
                pos=j;
            }
        }

                temp=a[i];
                a[i]=a[pos];
                a[pos]=temp;
            
        

    }
    for(int i=0;i<n;i++)
    cout<<"the elements ordered are" <<a[i]<<endl;

}

int main()
{
    int a[max];
    int n;
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter elements";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ss(a,n);
}