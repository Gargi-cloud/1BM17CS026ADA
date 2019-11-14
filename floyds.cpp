#include <bits/stdc++.h>
using namespace std;
#define V 5  
#define INF 99999  
void print(int dist[][V]);  
 
void floyd(int graph[][V])  
{  

    int dist[V][V], i, j, k;  
    for (i = 0; i < V; i++)  
        for (j = 0; j < V; j++)  
            dist[i][j] = graph[i][j];  

    for (k = 0; k < V; k++)  
    {  
 
        for (i = 0; i < V; i++)  
        {  

            for (j = 0; j < V; j++)  
            {  

                if (dist[i][k] + dist[k][j] < dist[i][j])  
                    dist[i][j] = dist[i][k] + dist[k][j];  
            }  
        }  
    }  
 
    print(dist);  
}  

void print(int dist[][V])  
{  
    cout<<"Shortest distances between every pair of vertices: \n";  
    for (int i = 0; i < V; i++)  
    {  
        for (int j = 0; j < V; j++)  
        {  
            if (dist[i][j] == INF)  
                cout<<"INF"<<"     ";  
            else
                cout<<dist[i][j]<<"     ";  
        }  
        cout<<endl;  
    }  
}  

int main()  
{  

    int graph[V][V] = { {0,2,INF,1,8},  
                        {6,0,3,2,INF},  
                        {INF,INF,0,4,INF},  
                        {INF,INF,2,0,3},
                        {3,INF,INF,INF,0}
                    };  
    floyd(graph);  
    return 0;  
}  

  
