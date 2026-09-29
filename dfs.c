#include<stdio.h>
int graph[7][7];
int visited[7];

void DFS(int source){

    printf("%d is visited***",source);

    visited[source] = 1;

    for (int j = 0; j < 7; j++)
    {
        if (graph[source][j] == 1  && visited[j] == 0)
        {
            DFS(j);
        }
        
        
    }
    
}

int main(){

    for (int i = 0; i <=6; i++)
    {
        for (int j = 0; j <=6; j++)
        {
            graph[i][j] =0;
        }
        
    }

    for (int i = 0; i <=6; i++)
    {
        visited[i] = 0;
    }

    printf("ENTER THE NUMBER OF EDGES =");
    int e =0;

    scanf("%d",&e);


    for (int i = 0; i <e; i++)
    {
        int s,d;
        printf("enter source and distination=");
        scanf("%d %d",&s,&d);

        graph[s][d] = 1;
        graph[d][s] = 1;
    }

    DFS(1);
    
    
    
}