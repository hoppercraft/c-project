#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
int data;
struct Node* next;
} Node;
int isEmpty(Node* top) {
return top == NULL;
}
void push(struct Node ** top ,int value) {
struct Node* newNode =(struct Node *) malloc(sizeof(struct Node));
newNode ->data = value;
newNode ->next = *top;
*top = newNode;
}
int pop(struct Node ** top) {
    if (* top == NULL) {
        printf("Stack underflow\n");
        return -1;
    }
    int popped = (* top)->data;
    struct Node* temp = *top;
    *top = (* top)->next;
    free(temp);
    return popped;
}
int main () {
    Node* top = NULL;
    push (&top , 10); push (&top , 20); push (&top , 30);
    push (&top , 40); push (&top , 50);
    printf("Stack elements: \n");
    display(top);
    printf("Popped element: %d\n", pop (& top));
    printf("Top element: %d\n", peek(top));
    printf("Stack elements after pop: ");
    display(top);
    return 0;
}