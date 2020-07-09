//포인터 변수 : 주소를 저장하는 변수
#include <stdio.h>
int main1();
int main2();

int main()
{
	// main1();
	main2();
};


int main1()
{
	char c='A';
	char* cp=NULL;

	cp=&c; //주소 저장

	printf("%x %c %c \n",&c, c, *&c);
	printf("%x %x %x \n",&cp, cp, *&cp);

	printf("%c \n", c); // 직접 접근
	printf("%c \n", *cp); // 간접 접근
};

int main2()
{
	int a=0, b=0, c=0;
	int* ip=NULL;

	ip=&a;
	*ip=10;
	printf("%d %d %d %d \n",a,b,c,*ip);

	ip=&b;
	*ip=20;
	printf("%d %d %d %d \n",a,b,c,*ip);

	ip=&c;
	*ip=30;
	printf("%d %d %d %d \n",a,b,c,*ip);

	// 포인터로 간접 접근하여 바꾸기 가능
};

