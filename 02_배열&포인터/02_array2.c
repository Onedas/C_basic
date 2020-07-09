#include <stdio.h>

int main()
{
	int array1[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
	int array2[4][3]={{1,2,3},{4,5,6},{7,8},{10}}; 	//행 단위로 설정 가능
													//지정 안된곳은 0으로 초기화
	int array3[][6]={1,2,3};
	// int array3[4][] 	//에러 열이 설정 되어 있지 않으면 에러
	// int array4[][]	//에러
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
			printf("array1[%d][%d]:%d array2[%d][%d]:%d\n",i,j,array1[i][j],i,j,array2[i][j]);
	}
	printf("\n");
	printf("array1       : %d\t*array1    : %d\t**array1 : %d\n",array1,*array1,**array1);
	printf("array1[0]    : %d\t*array1[0] : %d\n",array1[0],*array1[0]);
	printf("array1[0][0] : %d\n",array1[0][0]);
	// printf("%d",*array1[0][0]); //에러

	printf("array1[2] : %d\n",*array1[2]);
}	
