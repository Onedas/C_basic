#include <stdio.h>

struct student
{
	char no[10];
	char name[20];
	double total;
};

int main()
{
	struct student stu={"2013250219", "Kim", 160};
	struct student* p=NULL;
	struct student** pp=NULL;

	p=&stu;
	printf("%s %s %lf \n",stu.no, stu.name, stu.total);
	printf("%s %s %lf \n",(*p).no, (*p).name, (*p).total);
	printf("%s %s %lf \n",p->no, p->name, p-> total); // -> 는 구조체 포인터에서만 사용 가능

	pp=&p;
	printf("%s %s %lf \n",(*pp)->no, (*pp)->name, (*pp)->total);
}