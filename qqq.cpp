    #include <iostream>
 
using namespace std;
 
void quick_sort(int[],int,int);
int partition(int[],int,int);
 
int main()
{
    int a[50],n,i;
    cout<<"Enter the size";
    cin>>n;
    cout<<"\nEnter array elements:";
    
    for(i=0;i<n;i++)
        cin>>a[i];
        
    quick_sort(a,0,n-1);
    cout<<"\nArray after sorting:";
    
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    
    return 0;        
}
 
void quick_sort(int a[],int low,int high)
{
    int pivot_pos;
    if(low<high)
    {
        pivot_pos =partition(a,low,high);
        quick_sort(a,low,pivot_pos-1);
        quick_sort(a,pivot_pos+1,high);
    }
}
 
int partition(int a[],int low,int high)
{
    int pivot,i,j,temp;
    pivot=a[low];
    i=low;
    j=high+1;
    
    do
    {
        do
            i++;
            
        while(a[i]<pivot && i<=high);
        
        do
            j--;
        while(pivot<a[j]);
        
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);
    
    a[low]=a[j];
    a[j]=pivot;
    
    return(j);
}
