#ifndef BOUNDED_QUEUE_H
#define BOUNDED_QUEUE_H

#include <stdbool.h>

/* A Queue is a pointer to queue_type struct */
typedef struct queue_type *Queue;
typedef int Item;

Queue create_queue(int);
void destroy(Queue);
void insert_item(Queue, Item);
Item remove_item(Queue);
Item front(Queue);
Item rear(Queue);
bool is_empty(Queue);
int depth(Queue);

#endif
