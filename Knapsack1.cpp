#include<iostream>
using namespace std;
int main()
{
    float w[3]={5,2,10};
    float x[3],p[3]={1000,200,300};
    float c=15.0;
    for(int i=0;i<3;i++)
    {
        if(w[i]<=c)
        {
            x[i]=1;
            c=c-w[i];
        }
        else
        {
            x[i]=c/w[i];
            c=0;
            break;
        }
    }
    float sum=0;
    for(int i=0;i<3;i++)
    sum=sum+x[i]*p[i];
    cout<<"profit is "<<sum;
}