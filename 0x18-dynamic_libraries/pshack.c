#include <unistd.h>
#include <string.h>

int rand()
{
	static int ps = -1;

	ps++;
	if (ps == 0)
		return 8;
	if (ps == 1)
		return 8;
	if (ps == 2)
		return 7;
	if (ps == 3)
		return 9;
	if (ps == 4)
		return 23;
	if (ps == 5)
		return 74;
	return ps * ps % 30000;
}
