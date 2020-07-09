#include <stdio.h>

int sum(int x, int y); //선언 먼저 해도 됨

int main()
{
	int answer = 0;
	answer = sum(3, 4);

	printf("%d",answer);

	return 0;
};

int sum(int x, int y) //선언 후 정의 가능...
{
	int result =0;
	return x+y;
}
