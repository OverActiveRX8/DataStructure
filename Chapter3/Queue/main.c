#include "queue.h"

int main() {
    queue q = createQueue(3);
    enqueue(1, q);
    enqueue(2, q);
    enqueue(3, q);
    dequeue(q);
    enqueue(4, q);
    enqueue(5, q);
    enqueue(6, q);
    elementType val = frontAndDequeue(q);
    val = frontAndDequeue(q);
    val = frontAndDequeue(q);
    val = frontAndDequeue(q);
    return 0;
}