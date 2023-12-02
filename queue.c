#include<stdio.h>
#include<stdlib.h>
struct Queue 
{
    int size;
    int f,r;
    int* arr;
};
int IsFull(struct Queue *q){
    if(q->r == q->size-1){
        return 1;
    }
    return 0;
}
int IsEmpty(struct Queue *q){
    if(q->r == q->f){
        return 1;
    }
    return 0;
}
void enqueue(struct Queue *q , int value)
{
    if(IsFull(q)){
        printf("This Queue is Full");
    }
    else{
        q->r++;
        q->arr[q->r]=value;
    }
};
int dequeue(struct Queue *q)
{ int a=-1;
    if(IsEmpty(q)){
        printf("This Queue is Empty");
    }
    else{
        q->f++;
        a=q->arr[q->f];
    }
    return a;
};

int main(){
    struct Queue q;
    q.size=100;
    q.f=q.r=-1;
    q.arr = (int*)malloc(q.size*sizeof(int)); 
    //enqueue
    enqueue(&q,12);
    enqueue(&q,14);
    enqueue(&q,16);
    printf("The element is deleted is %d\n",dequeue(&q));
    printf("The element is deleted is %d\n",dequeue(&q));
    printf("The element is deleted is %d\n",dequeue(&q));
    if(IsFull(&q)){
        printf("Queue is full");
    }
    if(IsEmpty(&q)){
        printf("Queue is empty");
    }
}
