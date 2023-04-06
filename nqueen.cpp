#include <iostream>

using namespace std;

int x[90];
int place (int k, int i)
{
    
    for(int j=1;j<=(k-1);j++)
    {
        if(x[j]==i || (abs(x[j]-i)==abs(j-k)))
        return false;
    }
    return true;
}

void nq(int k,int n)
{
    for(int i=1;i<=n;i++)
    {
        if(place(k,i))
        {
            x[k]=i;
            if(k==n)
            {
                for(int i=0;i<n;i++)
                cout<<x[i];
            }
            else
            nq(k+1,n);
        }
    }
}

int main() {
   nq(8,8);

    
}
