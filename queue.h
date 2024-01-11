#ifndef LINKED_LIST_QUEUE_H_
#define LINKED_LIST_QUEUE_H_
struct node{
	int data;
	struct node *next;
};
typedef struct node	  QUEUE;
typedef struct node	* PQUEUE;
typedef struct node	**PPQUEUE;

PQUEUE	make_node(int data){
	PQUEUE new_node = (PQUEUE)malloc(sizeof(QUEUE));
	if (new_node == NULL)
		exit(EXIT_FAILURE);
	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}

int	enqueue(PPQUEUE FRONT, PPQUEUE REAR, int data){
	PQUEUE temp = make_node(data);
	if ((*FRONT == NULL) && (*REAR == NULL)){
		*FRONT = *REAR = temp;
		return data;}
	(*REAR)->next = temp;
	*REAR = temp;
	return data;
}

int 	dequeue(PPQUEUE FRONT, PPQUEUE REAR){
	if (*FRONT){
		int data = (*FRONT)->data;
		PQUEUE temp = *FRONT;
		*FRONT = (*FRONT)->next;
		free(temp);
		return data;
	}
	return -1;
}

void	display(PPQUEUE FRONT){
	PQUEUE temp = *FRONT;
	printf("||");
	while(temp){
		printf(" %d -> ", temp->data);
		temp = temp->next;
	}
	printf(" NULL ||\n");
}
#endif
