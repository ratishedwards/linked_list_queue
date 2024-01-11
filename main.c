#include<stdio.h>
#include<stdlib.h>
#include"queue.h"

int main(int argc, char *argv[]){

	PQUEUE FRONT = NULL;
  PQUEUE REAR  = NULL;

	printf("EQUEUED : %d\n", enqueue(&FRONT, &REAR, 11));
	printf("EQUEUED : %d\n", enqueue(&FRONT, &REAR, 12));
	printf("EQUEUED : %d\n", enqueue(&FRONT, &REAR, 13));
	printf("EQUEUED : %d\n", enqueue(&FRONT, &REAR, 14));
	display(&FRONT);

	printf("DEQUEUE : %d\n", dequeue(&FRONT, &REAR));
	printf("DEQUEUE : %d\n", dequeue(&FRONT, &REAR));
	printf("DEQUEUE : %d\n", dequeue(&FRONT, &REAR));
	printf("DEQUEUE : %d\n", dequeue(&FRONT, &REAR));
	display(&FRONT);

	return 0;
}
