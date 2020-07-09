/*input
5
*/
#include <stdio.h>

int main()
{
	int n;
	int result=1;

	printf("팩토리얼 연산을 원하는 숫자를 입력하세요 : ");
	scanf("%d",&n);
	printf("%d\n",n);

	for (int i=n;i>=1;i--)
		result *= i;

	printf("%d의 팩토리얼 연산 결과는 %d 입니다.\n",n,result);
}