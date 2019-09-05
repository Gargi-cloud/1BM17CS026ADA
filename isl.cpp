#include<iostream>
using namespace std;
int arr[20][20],visited[20][20],col=0,row=0;
void dfs(int v,int r2,int c2){
    int r=0,c=0;
    int a1[]={-1,-1,-1,0,0,1,1,1};
    int a2[]={-1,0,1,-1,1,-1,0,1};
    visited[r2][c2]=1;
    for(int k=0;k<8;k++){
        r=r2+a1[k];
        c=c2+a2[k];
        if((r>=0 && r<row)&&(c>=0 && c<col)&&(arr[r][c]==1)&&(!visited[r][c])){
             dfs(arr[r][c],r,c);
        }
    }

}
int main(){
int count=0,row1=0,col1=0;
cout<<"enter row and col\n";
cin>>row>>col;
cout<<"Enter elements of Matrix";
for(int i=0;i<row;i++){
 for(int j=0;j<col;j++){
     cin>>arr[i][j];       
 }
}
for(int i=0;i<row;i++){
 for(int j=0;j<col;j++){
     visited[i][j]=0;   
 }
}
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){  
      if(arr[i][j]==1 && visited[i][j]==0){
       row1=i;
       col1=j;
       dfs(arr[i][j],row1,col1);
       ++count;
     
      }
   
    }
}
cout<<"The number of islands are  "<<count;
return 0;
}
