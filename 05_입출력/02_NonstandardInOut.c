#include <stdio.h>
#include <conio.h>
/*
	비표준은 버퍼를 사용하지 않기 때문에 표준 입출력 함수들에 비해 빠름
	여러개의 문자, 데이터 처리에는 비효율적.

int getch(void) : 키보드로부터 한 문자를 입력받음 (입력 문자 안보임)
int getche(int c) : 키보드로부터 한 문자를 입력받음 (입력 문자 보임)
int putch(int c) : 모니터에 한 문자를 출력
int kbhit(void) : 키보드의 키가 눌러졌는지를 조사(누르면 0이 아닌 수 반환)
*/

int main()
{
	char ch=0;
	printf("키 입력");

	while (ch != 'q')
	{
		if (kbhit() )
		{
			ch = getche();
			putch(ch);
		}
	}
}