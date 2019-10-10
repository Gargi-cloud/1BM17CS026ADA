#include<iostream>
using namespace std;
int indegree[100];
int G[100][100];
int n;

void Topological()
{
	for(int i=1; i<=n; i++)
	{
		indegree[i]=0;
		for(int j=1; j<=n; j++)
			indegree[i]=indegree[i]+G[j][i];
	}

	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(indegree[j]==0)
			{
				cout<<j;
				indegree[j]=-1;
				for(int k=1; k<=n; k++)
				{
					if(G[j][k]==1)
						indegree[k]=indegree[k]-1;
				}
    			}
		}
	}
}

int main()
{

	cout<<"Enter a no:";
	cin>>n;
	cout<<"Enter the matrix:";
	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
			cin>>G[i][j];

	Topological();

	return 0;
}