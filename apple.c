#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack[MAX], top = -1;

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if (top == MAX - 1)
        return 1;
    else
        return 0;
}

void push(int value)
{
    if (isFull() == 1)
    {
        printf("Stack is full\n");
    }
    else
    {
        stack[++top] = value;
    }
}
void peek()
{
    if (isEmpty() == 1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("%d", stack[top]);
    }
}
void pop()
{
    if (isEmpty())
    {
        printf("Stack is empty");
    }
    else
    {
        printf("%d", stack[top]);
        stack[top--] = 0;
    }
}

int main()
{
    int q, p;
    while (1)
    {
        printf("1.push\n2.peek\n3.pop\n4.exit\n");
        scanf("%d", &q);
        if (q == 1)
        {
            printf("Enter the number to push:");
            scanf("%d", &p);
            push(p);
        }
        if (q == 2)
        {
            peek();
        }
        if (q == 3)
        {
            pop();
        }
        if (q == 4)
        {
            break;
        }
    }
}