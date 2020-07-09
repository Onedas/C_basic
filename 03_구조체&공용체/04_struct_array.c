#include <stdio.h>

struct student
{
	char no[10];
	char name[20];
	double math;
	double english;
	double total;
};

int main()
{
	int i=0;

	struct student stu[3] = {
		{"2013250219", "Kim", 80, 80, 0},
		{"2013250220", "Jin", 90, 50, 0},
		{"2013250221", "Sung", 100,100,0}
	};

	for (i=0; i<3; i++)
	{
		stu[i].total = stu[i].math + stu[i].english;

		printf("학번 : %s, 이름 : %s \n",stu[i].no, stu[i].name);
		printf("총점 : %.1lf \n", stu[i].total);
		printf("\n");
	}
}