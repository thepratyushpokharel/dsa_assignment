Documentation for Question 8

(a) Data Structure  
We use an array to store random numbers between 1 and 1000.  
The number of elements is chosen by the user during the program run.  
We then sort the array using the sorting algorithm the user selects (only Bubble Sort is shown here).

(b) Functions  
- bubbleSort: This sorting method compares two numbers at a time and swaps them if needed.  
  It repeats the process until the entire array is sorted.  
  We also count how many comparisons and swaps are made during sorting.

(c) main()  
We ask the user how many random numbers they want.  
Then, we generate those numbers randomly and display them.  
We sort the numbers using Bubble Sort and show the sorted list.  
Finally, we print the total number of comparisons and swaps that happened during sorting.

(d) Sample Output  
Enter how many numbers: 5  

Before Sorting:  
672 24 315 89 498  

Sorting using Bubble Sort...  

After Sorting:  
24 89 315 498 672  

Comparisons: 10  
Swaps: 6
