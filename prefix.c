#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#define MAX 100

typedef struct{
    int data[MAX];
    int top;
}Stack;

void initStack(Stack *s){
    s->top=-1;
}
int isEmpty(Stack *s){
    return s->top==-1;
}

int isFull(Stack *s){
    return s->top==MAX-1;
}

void push(Stack *s,int value){
    s->data[++s->top]=value;
}
int peek(Stack *s){
    return(s->data[s->top]);
}
int pop(Stack *s){
    return(s->data[s->top--]);
}

int main(){
    Stack s;
    s.top=-1;
    int v,q;
    char a[20];
    while(1){
        printf("1.push\n2.peek\n3.pop\n4.getexpression\n5.exit\n");
        scanf("%d",&q);
        if(q==1){
            printf("Enter the value\n");
            scanf("%d",&v);
            if(isFull(&s)){
                printf("The stack is full\n");
            }
            else{
                push(&s,v);
            }
        }
        else if(q==2){
            if(isEmpty(&s)){
                printf("The stack is empty\n");
            }else{
            printf("%d\n",peek(&s));
            }
        }
        else if(q==3){
            if(isEmpty(&s)){
                printf("The stack is empty\n");
            }else{
            printf("%d\n",pop(&s));
            }
        }
        else if(q==4){
            printf("Enter the expression");
        }
        else{
            break;
        }
    }
}