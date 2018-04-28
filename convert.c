#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv [])
{
	int input = 0;

	if (argc != 2) return 1;

	input = atoi(argv[1]);

	float output = 32 + input * 1.8;

	printf("output is %7.2f", output);

	return 0;

}
