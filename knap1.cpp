#include <bits/stdc++.h>
using namespace std;

int i,j,n,m,p[100],w[100],v[100][100];

int max(int x,int y)
{
 if(x>y)
	return x;
 else
	return y;
}

void knapsack()
{
 for(i=0;i<=n;i++)
 {
  for(j=0;j<=m;j++)
  {
   if(i==0||j==0)
   {
    v[i][j]=0;
   }
   else if(j-w[i]<0)
   {
    v[i][j]=v[i-1][j];
   }
   else
   {
    v[i][j]=max(v[i-1][j],v[i-1][j-w[i]]+p[i]);
   }
  }
 }
 cout<<"The output is:\n";
 for(i=0;i<=n;i++)
 {
  for(j=0;j<=m;j++)
  {
   cout<<v[i][j]<<" ";
  }
  cout<<"\n";
 }
 cout<<"The maximum value is:"<<v[n][m];
 
}

int main()
{
 cout<<"Enter the no. of items:\n";
 cin>>n;
 cout<<"Enter the weight of the each item:\n";
 for(i=1;i<=n;i++)
 {
  cin>>w[i];
 }
 cout<<"Enter the value of each item:\n";
 for(i=1;i<=n;i++)
 {
  cin>>p[i];
 }
 cout<<"Enter the knapsack's capacity: \n";
 cin>>m;
 knapsack();
 return 0;
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

