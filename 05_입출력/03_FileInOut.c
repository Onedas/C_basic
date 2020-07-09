#include <stdio.h>
/*
열기
FILE* fopen(const char* filename, const char* mode);
	
	mode 종류
		파일 접근 모드 : r, w, a, r+, w+, a+
		파일 입출력 모드 : t, b

닫기
int fclose(FILE* stream);

입출력
int fgetc(FILE* stream) : 문자 단위 입력
int fputc(int c, FILE* stream) : 문자 단위 출력
char* fgets(char* s, int n, FILE* stream) : 문자열 단위 입력
int fputs(const char* s, FILE* stream) : 문자열 단위 출력
int fscanf(FILE* stream, const char* format, ...) : 자료형에 맞춘 입력
int fprintf(FILE* stream, const char* format, ...) : 자료형에 맞춘 출력
*/

int main()
{
	FILE* stream;
	int file_state;
	int input = 0;
	// 열기
	stream = fopen("data1.txt","w");
	if (stream==NULL)
		printf("파일 열기 에러 \n");

	//
	

	// 닫기
	file_state = fclose(stream);
	if (file_state==EOF)
		printf("파일 닫기 에러 \n");
}
