Documentation for Question 5

(a) Data Structure  
We used a 2D array (called an adjacency matrix) to represent the graph.  
Each cell at position [i][j] tells if there's a connection (or edge) between node i and node j.  
We also use a separate array called visited[] to keep track of which nodes we’ve already seen.

(b) Functions  
- bfs: This stands for Breadth First Search. It uses a queue to explore the graph layer by layer.  
  It starts from the given node, visits its neighbors, then the neighbors’ neighbors, and so on.  
- dfs: This is Depth First Search. It uses recursion. It goes deep into one path before coming back.  
  For both functions, we update the visited array to avoid repeating nodes.

(c) main()  
We first ask the user to enter the number of nodes and the graph's connections as a matrix.  
Then we run BFS and DFS starting from node 0.  
Both functions print the order in which nodes are visited.

(d) Sample Output  
Enter number of nodes: 4  
Enter adjacency matrix:  
0 1 1 0  
1 0 0 1  
1 0 0 1  
0 1 1 0  

BFS starting from node 0: 0 1 2 3  
DFS starting from node 0: 0 1 3 2
