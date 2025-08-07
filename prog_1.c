#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

char stack[SIZE];
int top = -1;

void push(char ch) {
    if (top < SIZE - 1) {
        stack[++top] = ch;
    }
}

char pop() {
    if (top >= 0) {
        return stack[top--];
    }
    return '\0';
}

int isMatching(char a, char b) {
    return (a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}');
}

int isBalanced(char* expr) {
    for (int i = 0; expr[i] != '\0'; i++) {
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{') {
            push(expr[i]);
        } else if (expr[i] == ')' || expr[i] == ']' || expr[i] == '}') {
            char temp = pop();
            if (!isMatching(temp, expr[i])) {
                return 0;
            }
        }
    }
    return top == -1;
}

int main() {
    char* expressions[] = {
        "a+(b-c)*(d",
        "m+[a-b*(c+d*{m)]",
        "a+(b-c)"
    };
    for (int i = 0; i < 3; i++) {
        if (isBalanced(expressions[i])) {
            printf("Expression %d is balanced\n", i + 1);
        } else {
            printf("Expression %d is not balanced\n", i + 1);
        }
        top = -1;
    }
    return 0;
}
