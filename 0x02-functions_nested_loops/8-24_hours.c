#include "main.h"
/**
 * jack_bauer - prints every minute in 24 hours
 * Return - void
 */
void jack_bauer(void)
{
	int big_hour;
	int little_hour;
	int big_minute;
	int small_minute;

	big_hour = 48;
	while (big_hour <= 50)
	{
		little_hour = 48;
			while (little_hour <= 57)
			{
				big_minute = 48;
				while (big_minute < 54)
				{
					small_minute = 48;
					while (small_minute <= 57)
					{
						_putchar(big_hour);
						_putchar(little_hour);
						_putchar(':');
						_putchar(big_minute);
						_putchar(small_minute);
						_putchar('\n');
						small_minute++;
					}
					big_minute++;
				}
				little_hour++;
				if (big_hour == 50 && little_hour == 53)
				{
					break;
				}
			}
			big_hour++;
	}
}
