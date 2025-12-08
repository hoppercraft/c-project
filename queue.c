#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 5
typedef struct{
    int data[MAX_SIZE];
    int front;
    int rear;
}Queue;

void intializeQueue(Queue *q){
    q->front=-1;q->rear=-1;
}
int isEmpty(Queue *q){
    return q->front == -1||q->front>q->rear;
}
int isFull(Queue *q){
    return q->rear == MAX_SIZE - 1;
}
void enqueue(Queue *q,int data){
    if (isFull(q)){
        printf("The queue is full");
        return;
    }
    if(isEmpty(q)){
        q->front=0;
    }
    q->rear++;
    q->data[q->rear]=data;
}

int dequeue(Queue *q){
    if(isEmpty(q)){
        printf("The queue is empty");
        return;
    }
    int value=(q->data[q->front++]);
    if(q->front>q->rear){
        q->front=q->rear=-1;
    }
    printf("Dequed %d\n",value);
    return value;
}

void display(Queue *q){
    if(isEmpty(q)){
        printf("Queue is Empty.\n");
        return;
    }
    printf("Queue elements: ");
    for(int i=q->front;i<q->rear;i++){
        printf("%d\n",q->data[i]);
    }
}
int main(){
    Queue *q;
    intializeQueue(q);
    int n,x;
    printf("1.EnQueue\n2.DeQueue\n3.Display\n4.Exit");
    scanf("%d",&n);
    if(n==1){
        printf("Enter the number to EnQueue");
        scanf("%d",&x);
        
    }
}