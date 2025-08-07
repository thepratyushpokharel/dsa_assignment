Documentation for Question 2

(a) Data Structure  
We used two stacks. One is for converting the expression from infix (normal math) to postfix (a different order).  
The second stack is used to solve or evaluate the postfix expression.

(b) Functions  
- precedence: tells us which operator comes first.  
- infixToPostfix: changes the math expression into postfix format.  
- evalPostfix: solves the postfix expression and gives the result.

(c) main()  
We took a simple expression: 3+(2*4)-5  
First, we changed it into postfix form.  
Then we solved it and printed the postfix and the final answer.

(d) Sample Output  
Postfix: 324*+5-  
Result: 6
