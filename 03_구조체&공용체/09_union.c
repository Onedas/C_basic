#include <stdio.h>

union u_point
{
	int x;
	double y;
};

struct s_point
{
	int x;
	double y;
};

int main()
{
	union u_point u;
	struct s_point s;

	printf("%d %d \n", sizeof(u), sizeof(s));

	u.x = 10;
	s.x = 10;
	printf("u:(%d,%lf)  s:(%d,%lf) \n", u.x,u.y, s.x, s.y);
	
	u.y = 10.5;
	s.y = 10.5;
	printf("u:(%d,%lf)  s:(%d,%lf) \n", u.x,u.y, s.x, s.y);
	
}