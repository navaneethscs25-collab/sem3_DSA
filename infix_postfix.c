#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

char stack[100];
int top=-1;

void push(char ch) {
    stack[++top] = ch;
}

char pop() {
    return stack[top--];
}

int pr (char ch) {
    if (ch == '^') {
        return 3;
    } else if (ch == '*' || ch == '/') {
        return 2;
    } else if (ch == '+' || ch == '-') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char infix[50], postfix[50];
    int i=0, k=0;

    printf("Enter an infix expression :");
    scanf("%s", infix);

    while(infix[i] != '\0') {
        char ch = infix[i];

        if (isalnum(ch)) {
            postfix[k++] = ch;
        } else if(ch == '(') {
            push(ch); 
        } else if (ch ==')') {
            while(top != -1 && stack[top] != '(') {
                postfix[k++] = pop();
            }pop(); //remove (
        
        } else {
            while(top != -1 && pr(stack[top]) > pr(ch)) {
                postfix[k++] = pop();
            }push(ch);
        }
        i++;
    }

    while(top != -1 ) {
        postfix[k++] = pop();
    }postfix[k] = '\0';

    printf("Postfix Expression : %s", postfix);

    return 0;
}