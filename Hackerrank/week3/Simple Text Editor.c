#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct {
    char **data;
    int top;
    int capacity;
} Stack;
Stack* createStack(int capacity) {
    Stack *stack = malloc(sizeof(Stack));
    stack->data = malloc(capacity * sizeof(char*));
    stack->top = -1;
    stack->capacity = capacity;
    return stack;
}
void push(Stack *stack, const char *str) {
    if (stack->top == stack->capacity - 1) {
        stack->capacity *= 2;
        stack->data = realloc(stack->data, stack->capacity * sizeof(char*));
        if (!stack->data) {
            fprintf(stderr, "Memory allocation failed\n");
            exit(EXIT_FAILURE);
        }
    }
    stack->top++;
    stack->data[stack->top] = strdup(str);
}

void pop(Stack *stack) {
    if (stack->top == -1) return;
    free(stack->data[stack->top]);
    stack->top--;
}

char* top(Stack *stack) {
    if (stack->top == -1) return NULL;
    return stack->data[stack->top];
}


int main() {
     int Q;
    scanf("%d", &Q);
    getchar(); // consume newline

    Stack *states = createStack(1000);
    push(states, "");  // start with empty string

    for (int i = 0; i < Q; i++) {
        int op;
        scanf("%d", &op);

        if (op == 1) {  // Append
            char toAppend[100001];
            scanf("%s", toAppend);
            char *curr = top(states);
            int newLen = strlen(curr) + strlen(toAppend);
            char *newStr = malloc(newLen + 1);
            strcpy(newStr, curr);
            strcat(newStr, toAppend);
            push(states, newStr);
            free(newStr);
        } else if (op == 2) {  // Delete last k chars
            int k;
            scanf("%d", &k);
            char *curr = top(states);
            int len = strlen(curr);
            int newLen = len - k;
            char *newStr = malloc(newLen + 1);
            strncpy(newStr, curr, newLen);
            newStr[newLen] = '\0';
            push(states, newStr);
            free(newStr);
        } else if (op == 3) {  // Print kth char
            int k;
            scanf("%d", &k);
            char *curr = top(states);
            printf("%c\n", curr[k - 1]);
        } else if (op == 4) {  // Undo
            pop(states);
        }
    }

    while (states->top != -1) {
        pop(states);
    }
    free(states->data);
    free(states);

    return 0;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
