#include <iostream>
#include <algorithm>
using namespace std;
int main() {
   int profit[5]={0,1,2,5,6};
   int wt[5]={0,2,3,4,5};
   int cap=8,size=4;
   int table[5][9];
   
   for(int i=0;i<=size;i++)
   {
       for(int j=0;j<=cap;j++)
       {
           if(i==0 || j==0)
           
               table[i][j]=0;
           
           else if(wt[i]<=j)
           
               table[i][j]=max(profit[i]+table[i-1][j-wt[i]], table[i-1][j]);
           else
           table[i][j]=table[i-1][j];
           
          
       }
    
        
   }
     cout<<table[size][cap];
}
