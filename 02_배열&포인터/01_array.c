#include <stdio.h>

int main1()
{
	int student[5];

	student[0]=90;
	student[1]=80;
	student[2]=70;

	for (int i=0;i<5;i++)
		printf("%d번째 학생 점수 :%d\n",i+1,student[i]);
}
int main2()
{
	int array1[5]={90,80,70,60,50};
	int array2[]={90,80,70,60,99};
	int array3[5]={99,80,70};

	for (int i=0;i<5;i++)
		printf("%d %d %d\n",array1[i], array2[i], array3[i]);
};

int main3()
{
	int array[] = {10, 20, 30, 40};
	printf("*array : %d \n", *array);
}

int main()
{
	// main1();
	// main2();
	main3();
}
