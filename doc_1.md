Documentation for Question 1

(a) Data Structure  
We used a character stack (like a storage box) to store brackets as we move through the expression.  
If we find an opening bracket like (, {, or [, we put it in the stack.  
When we find a closing bracket like ), }, or ], we check if it matches the last one we stored.  
If every bracket has a match and the stack is empty in the end, it means the expression is balanced.

(b) Functions  
- push: adds a bracket to the top of the stack.  
- pop: removes the top bracket from the stack.  
- isMatching: checks if an opening and closing bracket go together.  
- isBalanced: goes through the expression and uses the stack to check if it’s balanced.

(c) main()  
We tested three expressions to see if the brackets are balanced.  
After each test, we printed whether it’s balanced or not.

(d) Sample Output  
Expression 1 is not balanced  
Expression 2 is not balanced  
Expression 3 is balanced
