


#include<iostream>
using namespace std;
void bubblesort(int a[],int n){
int temp,max,count=0;
 for(int i=0;i<n;i++){
   for(int j=0;j<n-i-1;j++){
         count=count+1;
        if(a[j]>a[j+1]){
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;}
          
       }
 }
   cout<<"\nthe no of comparisions: "<<count<<endl;
 
 
}

int main(){
  int n,l;
  cout<<"enter n";
  cin>>n;
  int a[n];
  cout<<"enter array elements";
  for(int i=0;i<n;i++)
    cin>>a[i];
  bubblesort(a,n);
  cout<<"the sorted array is \n";
  for(int i=0;i<n;i++)
   cout<<a[i]<<"\n";
  return 0;
}