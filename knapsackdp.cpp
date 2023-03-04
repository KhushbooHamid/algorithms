#include<iostream>
using namespace std;
int knapsack(int wt[],int val[],int c,int n)
{
    if(n==0||c==0)
    return 0;
    if(wt[n-1]<=c)
    return (val[n-1]+knapsack(wt,val,c-wt[n-1],n-1));
    else if(wt[n-1]>c)
    return knapsack(wt,val,c,n-1);

}
int main()
{
    int wt[4]={4,3,2,1},val[4]={4,12,10,10},c=4,n=4,ans;
    ans=knapsack(wt,val,c,n);
    cout<<ans;

}