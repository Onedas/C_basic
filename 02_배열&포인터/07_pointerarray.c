#include <stdio.h>
int main1();
int main2();

int main()
{
	// main1();
	// main2();
	printf("%d",495079/817974);
}


int main1()
{
	int a=1, b=2, c=3;
	int* pointer[3] = {NULL,NULL,NULL};

	pointer[0] = &a;
	pointer[1] = &b;
	pointer[2] = &c;
}

int main2()
{
	// 포인터 배열과 배열 포인터 변수의 차이
	int a=10, b=20, c=30;
	int* ap[3] = {NULL,NULL,NULL}; //포인터 배열

	int array[2][3] = {10,20,30,40,50,60};
	int (*p)[3] = NULL; //배열 포인터

	ap[0] = &a;
	ap[1] = &b;
	ap[2] = &c;

	printf("%x %x %x \n",&a, &b, &c);
	printf("%x %x %x \n",ap[0], ap[1], ap[2]);
	printf("%x %x %x \n",*(ap+0), *(ap+1), *(ap+2));
	printf("-------------\n");

	printf("%d %d %d \n", a, b, c);
	printf("%d %d %d \n", *ap[0], *ap[1], *ap[2]);
	printf("%d %d %d \n", **(ap+0), **(ap+1), **(ap+2));
	printf("-------------\n");
}