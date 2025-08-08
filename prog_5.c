#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int graph[SIZE][SIZE], visited[SIZE], n;

void bfs(int start) {
    int queue[SIZE], front = 0, rear = 0;
    visited[start] = 1;
    queue[rear++] = start;

    while (front < rear) {
        int current = queue[front++];
        printf("%d ", current);

        for (int i = 0; i < n; i++) {
            if (graph[current][i] && !visited[i]) {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
}

void dfs(int v) {
    visited[v] = 1;
    printf("%d ", v);

    for (int i = 0; i < n; i++) {
        if (graph[v][i] && !visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    printf("BFS starting from node 0: ");
    for (int i = 0; i < n; i++) visited[i] = 0;
    bfs(0);

    printf("\nDFS starting from node 0: ");
    for (int i = 0; i < n; i++) visited[i] = 0;
    dfs(0);

    return 0;
}
