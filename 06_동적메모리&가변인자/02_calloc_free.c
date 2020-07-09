#include <stdio.h>
#include <stdlib.h>

/*

calloc : malloc과 같이 힙 영역에 동적 메모리를 할당, 0으로 초기화.
		 & 사용방법이 조금 다름

	//원형 
	void* calloc(size_t num, size_t size);

*/

int main()
{
	int i=0;
	int* p=(int*)calloc(sizeof(int), sizeof(int));

	if(p==NULL)
		printf("힙 영역에 동적 메모리 할당 실패 \n");

	for (i=0; i<4; i++)
	{
		p[i]=i;
		printf("주소 : %x \n", &p[i]);
		printf("값 : %d \n", p[i]);
	}

	free(p);
	p=NULL;

	return 0;
}