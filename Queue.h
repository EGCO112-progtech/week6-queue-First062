#include "Node.h"

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){ 
  new_node->data=x;
  new_node->nextPtr=NULL;
  if (q->size==0) q->headPtr=new_node; //if first queue let head=new
  else q->tailPtr->nextPtr=new_node; //not first queue let tail->nextPtr=new
  q->tailPtr=new_node;
  (q->size)++;
  /*Finish enqueue */
 }
}


int dequeue_struct(Queue *q){
  if (q->size>0) {
   NodePtr t=q->headPtr;
   if(t){
    int value= t->data;
    if (q->size==1) q->tailPtr=NULL;
    q->headPtr=q->headPtr->nextPtr;
    free (t);
    (q->size)--;
       /*Finish dequeue */
   return value;
   }
  }
  else printf("Empty queue\n");
   return -1;
}