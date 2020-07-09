#include <stdio.h>

typedef struct score
{
	double math;
	double english;
	double average;
}SCORE;

struct student
{
	int no;
	SCORE s;
};
typedef struct student STUDENT; // typedef 후 선언 가능

int main()
{
	STUDENT stu = {2013250219, {90,80,0}};

	stu.s.average = (stu.s.math + stu.s.english) / 2;
	printf("학번 : %d \n", stu.no);
	printf("평균 : %lf \n", stu.s.average);
}