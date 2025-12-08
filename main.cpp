#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX],top=-1;


bool isEmpty(){
    if(top==-1)
    return true;
    else
    return false;
}

bool isFull(){
    if(top==MAX)
    return true;
    else
    return false;
}

void push(int value){
    if(isFull()){
        printf("Stack is full");
    }
    else{
        stack[++top]=value;
    }
}
void peek(){
    if(isEmpty()){
        printf("Stack is empty");
    }
    else{
        printf("%d",stack[top]);
    }
}
void pop(){
    if(isEmpty()){
        printf("Stack is empty");
    }
    else{
        printf("%d",stack[top]);
        stack[top--]=0;
    }
}
void display(){
    if(isEmpty()){
        printf("Stack is empty\n");
    }
    else{
        printf("Stack elements: ");
        for(int i=0;i<=top;i++){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}
int main(){
    int q,p;
    while(true){
        printf("1.push\n2.peek\n3.pop\n4.exit\n");
        scanf("%d",&q);
        if(q==1){
            printf("Enter the number to push:");
            scanf("%d",&p);
            push(p);
        }
        if(q==2){
            peek();
        }
        if(q==3){
            pop();
        }
        if(q==4){
            break;
        }
    }
}