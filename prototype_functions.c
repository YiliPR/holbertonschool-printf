#include <unistd.h>

void print_number(int n)
{
	char buffer[20];
	int i = 0, temp;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}

	temp = n;
	do {
		buffer[i++] = (temp % 10) + '0';
		temp /= 10;
	} while (temp > 0);

	while (i-- > 0)
	{
		write(1, &buffer[i], 1);
	}
}

