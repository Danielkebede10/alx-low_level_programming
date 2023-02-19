#include<stdlib.h>                                     
/**                                                     *main - Entry point
*Description: "prints alphabet in lower case"           *Return: Always 0 (Success)                            
*                                                       */

int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	return (0);
}
