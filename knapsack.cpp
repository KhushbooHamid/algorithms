#include<iostream>
using namespace std;
int main()
{
    float cap;
    float weight[5],price[5],profit[5];
    cout<<"enter the capacity ";
    cin>>cap;
    cout<<"enter the weight of 5 products"<<endl;
    for(int i=0;i<5;i++)
    {
    cin>>weight[i];
    }
    cout<<"enter the price of each item"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>price[i];
    }
    for(int i=0;i<5;i++)
    {
       profit[i]= price[i]/weight[i];
    }
    int temp;
     for(int i=0;i<5;i++)
    {
      if(profit[i+1]>profit[i])
      {
        temp=profit[i];
        profit[i]=profit[i+1];
        profit[i+1]=temp;
      }

    }
    cout<<"profit";
     for(int i=0;i<5;i++)
     {
        cout<<profit[i]<<endl;
     }


}