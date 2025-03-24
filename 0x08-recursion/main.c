#include <stdio.h>
int main(void)
{
	char x[5]= "this";
	char *p = x;
	printf("first_letter: %c\n", *p);
	p++;
	printf("second_letter: %c\n",*p);
	printf("second_letter: %c\n",p[0]);
	return(0);
}
