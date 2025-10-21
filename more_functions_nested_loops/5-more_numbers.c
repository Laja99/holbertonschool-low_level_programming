#include "main.h"
/**
 * more_numbers - print 0 to 14 , 10 times
 *
*/
void more_numbers(void)
{
	int x;
	int y;

	x = '0';
	while (x <= '14')
	{
		_putchar(x);
		x++;
		for (y = 1; y <= 10; y++)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');

}
