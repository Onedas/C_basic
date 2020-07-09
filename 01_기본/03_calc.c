#include <stdio.h>
/* 산술 연산(Arithmetic Operator)
	+
	-
	*
	/
	%
*/
int Arithmetic_Operator()
{
	int a,b;

	a = 10;
	b = 3;

	printf("a+b : %d\n",a+b);
	printf("a-b : %d\n",a-b);
	printf("a*b : %d\n",a*b);
	printf("a/b : %d\n",a/b);
	printf("a%%b : %d\n",a%b);

	return 0;
}

/* 비트 연산자 (bit operator)
	&(AND)
	|(OR)
	^(XOR)
	~(반전연산)
	<<(Shift)
	>>(Shift)
*/
int Bit_Operator()
{
	int a = 0xAF; 			// 10101111
	int b = 0xB5; 			// 10110101
							//------------
	printf("%x \n", a&b); 	// 10100101
	printf("%x \n", a|b); 	// 10111111
	printf("%x \n", a^b);	// 00011010
	printf("%x \n", ~a);	// 11111111 11111111 11111111 01010000
	printf("%x \n", a << 2);// 10 10111100
	printf("%x \n", b >> 3);// 00010110

	return 0;
}


int main()
{
	Arithmetic_Operator();
	Bit_Operator();
}