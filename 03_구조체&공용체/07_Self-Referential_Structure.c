#include <stdio.h>

typedef struct NODE
{
	char data[5];
	struct NODE* link;
}NODE;

int main()
{
	NODE p1 = {"p1",NULL};
	NODE p2 = {"p2",NULL};
	NODE head = {"head",NULL};

	head.link = &p1;
	p1.link = &p2;

	printf("%s %s %s \n", head.data, head.link->data, head.link->link->data);
}
