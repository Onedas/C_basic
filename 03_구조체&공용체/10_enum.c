#include <stdio.h>

enum week {ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN};
//          0    1     2      3    4     5     6
enum season {SPRING, SUMMER=2, FALL, WINTER};
//             0        2       3      4

int main()
{
	enum week p1,p2,p3;
	enum season s1,s2,s3,s4;

	p1=ONE;
	p2=TWO;
	p3=THREE;

	printf("%d %d %d \n", ONE, TWO, THREE);
	printf("%d %d %d \n", p1, p2, p3);

	printf("%d %d %d %d \n",s1, s2, s3, s4);
	s1 = SPRING;
	s2 = SUMMER;
	s3 = FALL;
	s4 = WINTER;
	printf("%d %d %d %d \n",s1, s2, s3, s4);
	
}