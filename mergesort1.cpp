#include<iostream>
using namespace std;

void combine(int[],int,int,int);
void split(int[],int,int);
int count=0;
int main()
{
  int a[20],n,i;
  cout<<"Enter the size:";
  cin>>n;
  cout<<"\nEnter the array elements:";
  for(i=0;i<n;i++)
  cin>>a[i];
  split(a,0,n-1);
  cout<<"\nArray after sorting:";
  for(i=0;i<n;i++)
  cout<<a[i]<<" ";
  cout<<count;

  return 0;
}
 
void split(int a[],int low,int high)
{ int mid;
  if(low<high)
  { 
     mid=(low+high)/2;
     split(a,low,mid);
     split(a,mid+1,high);
     combine(a,low,mid,high);
  }
}

void combine(int a[],int low,int mid,int high)
{
  int c[20],i,j,k;
  i=low; j=mid+1;
  k=low;
  while(i<=mid && j<=high)
 {
      count++;
     if(a[i]<a[j])
       c[k++]=a[i++];
     else
       c[k++]=a[j++];
 }
 if(i>mid)
 { while(j<=high)
   c[k++]=a[j++];
 }
if(j>high)
 {
   while(i<=mid)
   c[k++]=a[i++];
 }
for(i=low;i<=high;i++)
  { a[i]=c[i];
    }

 
}
  
  
