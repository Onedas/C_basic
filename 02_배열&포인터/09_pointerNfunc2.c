/*input
60
*/

#include <stdio.h>

int* input( ); //주소를 반환하는 함수

int main()
{
	int* p=NULL;

	p=input();
	printf("%d \n", *p);

	return 0;
}

int* input()
{
	static int num1; //지역변수 반환이므로 static으로 정적 변수로 만든 후 반환...
	scanf("%d", &num1);
	return &num1;
}