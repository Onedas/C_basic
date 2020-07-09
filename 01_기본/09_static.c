#include <stdio.h>

void count(void);

int main()
{
	count();
	count(); //static으로 x를 정의 하였기 때문에 초기화 안됨..
	count();

	// printf("%d",x);// 전역 변수가 아니므로 실행 x 
	return 0;
}

void count()
{
	static int x=0;
	int y=0;

	x=x+1;
	y=y+1;

	printf("x:%d, y:%d\n",x,y);
}