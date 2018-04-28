#include <stdio.h>
#include <stdlib.h>

int main()
{
	float t[20];

	float sum;

	float average;

	int index = 0;
	while(index < 20)
	{
		char s[20];
		//char * s;
		printf("Please enter a number of %d\n", index);
		//scanf("%s", s);
		//gets(s);
		fgets(s, sizeof(s), stdin);
		//printf("Your enter %s", s);
		
		float tmp = atof(s);

		//printf("Your enter a number of %f", tmp);
		t[index] = tmp;

		sum += tmp;

		index ++;

	}

	average = sum / 20;

	int count = 0;

	index = 0;
	while(index < 20)
	{
		if (t[index ++] > average) count ++;
	}

	printf("average=%7.2f, and count = %d\n", average, count);

	return 0;

}		
