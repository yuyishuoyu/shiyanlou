#include <stdio.h>

int main() 
{
	char c;
	printf("Please enter a Upper char ");
	scanf("%c", &c);

	printf("the lower of %c is %c", c, c + 32);

	return 0;

}
