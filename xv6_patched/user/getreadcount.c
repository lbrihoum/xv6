#include "types.h"
#include "stat.h"
#include "user.h"

// Running system call getReadCount()
int
main(void)
{
	printf(1, "There are %d system calls \n", getreadcount());
	exit();
}
