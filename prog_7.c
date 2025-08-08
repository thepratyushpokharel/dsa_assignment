#include <stdio.h>

#define INF 9999
#define V 5

int minDistance(int dist[], int visited[]) {
    int min = INF, min_index;

    for (int i = 0; i < V; i++) {
        if (!visited[i] && dist[i] < min) {
            min = dist[i];
            min_index = i;
        }
    }

    return min_index;
}

void dijkstra(int graph[V][V], int src) {
    int dist[V], visited[V];

    for (int i = 0; i < V; i++) {
        dist[i] = INF;
        visited[i] = 0;
    }

    dist[src] = 0;

    for (int i = 0; i < V-1; i++) {
        int u = minDistance(dist, visited);
        visited[u] = 1;

        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph[u][v] && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
        }
    }

    printf("Shortest distances from node %d:\n", src);
    for (int i = 0; i < V; i++) {
        printf("To %d: %d\n", i, dist[i]);
    }
}

int main() {
    int graph[V][V] = {
        {0, 4, 0, 0, 8},
        {4, 0, 2, 0, 0},
        {0, 2, 0, 3, 0},
        {0, 0, 3, 0, 5},
        {8, 0, 0, 5, 0}
    };

    dijkstra(graph, 0);
    return 0;
}
