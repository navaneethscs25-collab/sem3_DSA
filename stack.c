#include<stdio.h>
#define MAX 5

struct Stack {
    int arr[MAX];
    int top;
};

void push(struct Stack *s, int val) {
    printf("\n Adding element \n");
    if(s->top == MAX-1) {
        printf("Stack Overflow");
        return;
    }
    s->top ++;
    s->arr[s->top] = val;
    // printf("%d \n", s->top);
}

void pop(struct Stack *s) {
    printf("\n Deleting element \n");
    if(s->top == -1) {
        printf("Stack Underflow");
        return;
    }
    s->top --;
    // printf("%d \n", s->top);

}

void display(struct Stack *s) {
    printf("\n Displaying element \n");
    while(s->top >= 0) {
        printf("%d, ", s->arr[s->top]);
        s->top --;
    }
}

// int main() {
//     struct Stack s1;
//     s1.top = -1;
//     push(&s1, 1);
//     push(&s1, 2);
//     display(&s1);
//     return 0;

// }

int main() {
    struct Stack s1;
    s1.top = -1;

    int choice;
    while(1) {
        printf("\n");
        printf("1. push \n");
        printf("2. pop \n");
        printf("3. display \n");
        printf("4. exit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            

        if (choice == 1) {
            int val;
            printf("\nEnter a value :");
            scanf("%d", &val);
            push(&s1, val);
        } else if (choice == 2) {
            pop(&s1);
        } else if (choice == 3) {
            display(&s1);
        } else if (choice == 4) {
            return 0;
        } else {
            printf("\nInvalid Choice");
        }

        printf("\n########################\n");
    }
    return 0;
}