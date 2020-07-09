#include <stdio.h>
#include <stdlib.h>

/*

void* malloc(size_t size) : 메모리 할당
void free(void* p) : 메모리 해제

*/

int main()
{
	char* p1 = (char*)malloc(2);
	int* p2 = (int*)malloc(8);

	p1[0] = 'A';
	p1[1] = 'B';

	p2[0] = 10;
	p2[1] = 20;

	printf("주소 : %x %x %x %x \n",&p1[0], &p1[1], &p2[0], &p2[1]);
	printf("값 : %d %d %d %d \n", p1[0], p1[1], p2[0], p2[1]);

	free(p1);
	p1=NULL;

	free(p2);
	p2=NULL;
}

