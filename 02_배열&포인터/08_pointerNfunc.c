#include <stdio.h>

int func1(int i);
int func2(int* i); //포인터를 이용하면 func 안에서 외부 변수의 값을 수정 할 수 있음

int main()
{
	int a=10;
	int result=0;

	result = func1(a);
	printf("func1 실행후 결과\n");
	printf("result : %d \n",result);
	printf("a: %d \n",a);

	a=10;
	result=0;
	result = func2(&a);
	printf("\nfunc2 실행 후 결과\n");
	printf("result : %d \n",result);
	printf("a : %d \n",a);
}

int func1(int i)
{
	i++;
	return i;
}

int func2(int* i)
{
	*i = *i +1;
	return *i;
}