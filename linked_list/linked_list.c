#include <stdio.h>
#include <stdlib.h>

void print_NODE(struct NODE* head);
struct NODE* add_NODE(struct NODE* node1, struct NODE* node2, int d);
void remove_NODE(struct NODE* node2, struct NODE* node3);

struct NODE
{
	int	data;
	struct NODE* addr;
};

int	main(void)
{
	struct NODE* head = (struct NODE*)malloc(sizeof(struct NODE));
	if (!head)
		return -1;

	struct NODE* node1 = (struct NODE*)malloc(sizeof(struct NODE));
	if (!node1)
		return -1;

	head->addr = node1;
	node1->data = 12345;

	struct NODE* node2 = (struct NODE*)malloc(sizeof(struct NODE));
	if (!node2)
		return -1;

	node1->addr = node2;
	node2->data = 67890;
	node2->addr = NULL;

	printf("초기 상태\n");
	print_NODE(head);

	struct NODE* node3 = add_NODE(node1, node2, 981106);
	if (!node3)
		return -1;

	printf("\n노드 중간 삽입\n");
	print_NODE(head);

	remove_NODE(node2, node3);

	printf("\n마지막 노드 삭제\n");
	print_NODE(head);

	free(node3);
	free(node1);
	free(head);
	
	return 0;
}

void print_NODE(struct NODE* head)
{
	struct NODE* cursor = head->addr;
	cursor = head->addr;
	while (cursor)
	{
		printf("%d\n", cursor->data);
		cursor = cursor->addr;
	}
}

struct NODE* add_NODE(struct NODE* node1, struct NODE* node2, int d)
{
	struct NODE* node3 = (struct NODE*)malloc(sizeof(struct NODE));
	if (!node3)
		return 0;

	node1->addr = node3;
	node3->data = d;
	node3->addr = node2;

	return node3;
}

void remove_NODE(struct NODE* node2, struct NODE* node3)
{
	free(node2);
	node3->addr = NULL;
}