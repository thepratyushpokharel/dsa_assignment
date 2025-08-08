Documentation for Question 7

(a) Data Structure  
We use a 2D array to store the graph as a matrix where each cell contains the weight (or cost) of going from one node to another.  
If there’s no direct connection, we use a large number (like 9999) to mean "infinity" or no path.  
We also use two arrays:  
- dist[]: to keep track of the shortest known distance from the source node to every other node.  
- visited[]: to keep track of which nodes we’ve already processed.

(b) Functions  
- minDistance: This goes through all nodes and finds the one that is closest to the source and hasn’t been visited yet.  
- dijkstra: This is the main function that performs Dijkstra’s algorithm.  
  It starts from a source node and updates the shortest path to all other nodes by checking neighbors.

(c) main()  
We define a graph with 5 nodes and hardcode its weights in a 2D array.  
We then call dijkstra() to find the shortest paths from node 0 to all the other nodes.  
The distances are printed at the end.

(d) Sample Output  
Shortest distances from node 0:  
To 0: 0  
To 1: 4  
To 2: 6  
To 3: 9  
To 4: 8
