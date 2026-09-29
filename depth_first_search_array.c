#include<stdio.h>

int graph[7][7];
int visited[6];

void DFS(int source){

    visited[source] = 1;
    printf("*%d* visited",source);

    for (int j = 0; j < 7; j++)
    {
        if(graph[source][j] ==1 && visited[j]==0)
        {
            DFS(j);
        }
        
    }
    
}

int main(){

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            graph[i][j]=0;
        }
        
    }

    for (int i = 0; i < 7; i++)
    {
        visited[i]=0;
    }

    printf("ENTER THE NUMBER OF EDGES=");
    int e= 0;
    scanf("%d",&e);

    for (int i = 0; i < e; i++)
    {
        int s,d;
        printf("ENTER SOURCE AND DISTINATION=");
        scanf("%d %d",&s,&d);

        graph[s][d]=1;
        graph[d][s]=1;
    }
    

    DFS(1);



    return 0;
    
}