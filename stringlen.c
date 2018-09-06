#include <stdio.h>
int mystrlen( char str[] ) ;

int main( void)
{
	char updawg[] = "wats updawg"; //string length is 11
	int uhO;
	uhO = mystrlen(updawg);
	printf("the length of %s is %d\n", updawg, uhO);
}

int mystrlen( char str[])
{
	char current;
	current = str[0];
	int counter = 1;
	while(current != '\0')
	{
		counter++;
		current = str[counter];
	}
	return counter;
}

