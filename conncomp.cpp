#include<iostream>
using namespace std;
int n,arr[10],visited[10],adjacent[10][10];
void DFS(int v,int k){
    cout<<v<<"\t";
    visited[k]=1;
    for(int i=1;i<=n;i++){
        if((adjacent[k][i]==1) && (visited[i]==0))
           DFS(arr[i],i);
    }
}
int main(){
    int k=0;
    cout<<"enter no of nodes\n";
    cin>>n;
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    cout<<"enter the value of nodes\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<"enter adjacency matrix\n";
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           cin>>adjacent[i][j];
       }
   }
   cout<<"The connected components are : \n";
   for(int i=0;i<n;i++){
       if(visited[i]==0){
           k=i;
           DFS(arr[i],k);
           cout<<"\n";
       }
   }



    return 0;
}
