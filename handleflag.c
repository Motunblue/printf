#include "main.h"

/**
 * getflag - a function that gets flags for different specifiers
 * @c: the flag
 * Return: 0
 */

char getflag(char c)
{
	char flag = 0;

	switch (c)
	{
	case '+':
		flag = '+';
	break;
	case ' ':
		flag = ' ';
	break;
	case '#':
		flag = '#';
	break;
	}

	return (flag);
}
