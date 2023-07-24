#include<iostream>
using namespace std;

#include <limits.h> 
#include <stdio.h> 
#define V 9 
  


int minDistance(int dist[], bool sptSet[]) 
{ 
    
    int min = INT_MAX, min_index; 
  
    for (int v = 0; v < V; v++) 
        if (sptSet[v] == false && dist[v] <= min) 
            min = dist[v], min_index = v; 
  
    return min_index; 
} 
  

int printSolution(int dist[], int n) 
{ 
    printf("Vertex   Distance from Source\n"); 
    for (int i = 0; i < V; i++) 
        printf("%d tt %d\n", i, dist[i]); 
} 
  


void dijkstra(int graph[V][V], int src) 
{ 
    int dist[V]; 
    
  
    bool sptSet[V];
    for (int i = 0; i < V; i++) 
        dist[i] = INT_MAX, sptSet[i] = false; 
  
    dist[src] = 0; 
  
    for (int count = 0; count < V - 1; count++) { 
        int u = minDistance(dist, sptSet); 
  
        sptSet[u] = true; 
  
        for (int v = 0; v < V; v++) 
  
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX 
                && dist[u] + graph[u][v] < dist[v]) 
                dist[v] = dist[u] + graph[u][v]; 
    }  
    printSolution(dist, V); 
} 
int arr[10000][10000];
int main(){
    int cities, roads, destinations;
    for(int i = 0; i < cities; i++){
        for(int j = 0; j < cities; j++){
            arr[i][j] = 0;
        }
    }
    cin >> cities >> roads >> destinations;
    for(int i = 0; i < roads; i++){
        int road1, road2, weight;
        cin >> road1 >> road2 >> weight;
        int largestweight = 0;
        for(int j = 0; j < cities; j++){
            if(arr[j][road1] != 0 && arr[j][road2] != 0){
                
            }
        }
    }
}