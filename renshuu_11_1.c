#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i; double x, y;
	FILE* fp;
	fp = fopen("data1.txt", "w");
	for ( i = -10; i <= 10; i++)
	{
		 x = i;
		y = (2 * x * x) + 3;
		fprintf(fp, "%f,%f\n", x, y);
	}
	fclose(fp);
	return 0;
}