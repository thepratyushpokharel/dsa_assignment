Documentation for Question 6

(a) Data Structure  
We start with a normal unsorted array. From this, we build two types of heaps:  
- Min Heap: where the smallest number is at the top (root).  
- Max Heap: where the biggest number is at the top.  
We store both heaps in arrays, just like a binary tree.

(b) Functions  
- heapifyMin: This function makes sure that a parent node is smaller than its children.  
  If it's not, it swaps them and continues fixing down the tree.  
- heapifyMax: This does the opposite. It ensures that each parent is bigger than its children.  
- buildHeaps: This function copies the original array and applies the heapify functions  
  to build both min and max heaps.

(c) main()  
We take a sample array with some numbers.  
Then we use buildHeaps to create both min and max heaps from it.  
Finally, we print both heaps to show the result.

(d) Sample Output  
Min Heap: 1 3 7 9 4 10  
Max Heap: 10 9 7 1 3 4
