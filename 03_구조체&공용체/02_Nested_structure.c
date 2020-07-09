#include <stdio.h>

struct score
{
	double math;
	double english;
	double total;
};

struct student
{
	int no;
	struct score s; //구조체 안의 구조체(중첩 구조체)
};

int main()
{
	// struct student stu;
	// stu.no = 2013250219;
	// stu.s.math = 90;
	// stu.s.english = 80;
	// stu.s.total = stu.s.math + stu.s.english;

	struct student stu={2013250219, {90,80, 90+80}};

	printf("학번 : %d \n", stu.no);
	printf("총점 : %.1lf \n", stu.s.total);
}