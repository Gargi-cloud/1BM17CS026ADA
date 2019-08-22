#include<stdio.h>
int sort(int a[],int k,int n)
{
	for(int i=0;i<k;i++)
{
		int min=i;
		for(int j=i+1;j<n;j++){
			if (a[j]<a[min]){
				min=j;}}
		int temp=a[i];
		a[i]=a[min];
		a[min]=temp;}
	return a[k-1];
}
int main()
{

int n,arr[19];
printf("enter number of elements");
scanf("%d",&n);
printf("enter the array");
for (int i=0;i<n;i++){

scanf("%d",&arr[i]);

}

int k;
printf("enter the key");
scanf("%d",&k);
printf("kth smallest number:%d",sort(arr,k,n));
return 0;
}