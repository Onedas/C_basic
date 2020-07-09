#include <stdio.h>

typedef struct point
{
	int x;
	int y;
}POINT;

// 함수 인자로 struct 사용
void function1(POINT call)
{
	printf("%d %d \n\n", call.x, call.y);
}

// 함수 인자로 struct pointer 사용
void function2(POINT* call)
{
	printf("%d %d \n", call->x, call->y);
	printf("%d %d \n\n", (*call).x, (*call).y);
}

// struct 값 반환 함수
POINT function3()
{
	POINT p={30,60};
	return p;
};
// struct 주소 값 반환 함수
POINT* function4()
{
	static POINT p={40,80};
	return &p;
}

//
int main(void)
{
	POINT p={10,20};
	POINT p2;
	POINT* p3;

	function1(p);
	function2(&p);

	p2 = function3();
	printf("%d %d \n\n", p2.x, p2.y);

	p3 = function4();
	printf("%d %d \n\n", p3->x, p3->y);

}