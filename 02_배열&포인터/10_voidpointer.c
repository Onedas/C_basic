#include <stdio.h>

int main(void)
{
	char c=3;
	double d=3.1;

	void* vx=NULL;

	vx = &c;
	printf("vs의 주소 값 : %x \n", vx);
	// printf("vx의 값 : %d \n", *vx); //에러 void포인터는 값 호출 불가. 주소만 저장할 수 있는 변수
	printf("vx의 값 : %d \n", *(char*)vx); //강제 형변환 후 사용

	vx = &d;
	printf("vs의 주소 값 : %x \n", vx);
	// printf("vx의 값 : %lf \n", *vx); //에러
	printf("vx의 값 : %lf \n", *(double*)vx); //에러

}