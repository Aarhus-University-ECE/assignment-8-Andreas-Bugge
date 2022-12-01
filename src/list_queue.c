#include "list_queue.h"

void init_queue(queue *q)
{
    q->size = 0;
    q->front = NULL;
    q->rear = NULL;
}

int empty(queue *q)
{
  if (q->size==0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
  
}

void enqueue(queue *q, int x)
{
  qnode *help = (qnode *)malloc(sizeof(qnode));
  help->data = x;
  help->next = NULL;
  if(empty(q) == 1)
  {
    q->front = help;
  }
  else
  {
    q->rear->next = help;
  }
  q->rear = help;
  q->size = q->size + 1;
}

int dequeue(queue *q)
{
assert(empty(q) == 0);
int dequeueing = (int)q->front->data;
qnode *front = q->front;
q->front = q->front->next;
free(front);
q->size = q->size-1;
return dequeueing;
}
