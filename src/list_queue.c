#include "list_queue.h"

void init_queue(queue *q)
{
    q->size = 0;
    q->front = 0;
    q->rear = 0;
}

int empty(queue *q)
{
  return (q->front == q->rear);
}

void enqueue(queue *q, int x)
{
  q->rear = x;
  q->rear = q->rear +1;
  q->size = q->size -1; 
}

int dequeue(queue *q)
{
int dequeueing = (int)q->front;
q->front = q->front+1;
q->size = q->size +1;
return dequeueing;
}
