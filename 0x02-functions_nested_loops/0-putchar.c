#include <stdio.h>
#include <string.h>
/*
 *main
 *return 0 if successful
 * */
int main(void)
{
	char str[] = "_putchar";
	
	for (int i = 0 ; i < strlen(str) ; i++)
		putchar(str[i]);
	return 0;
}
