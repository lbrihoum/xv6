#include "types.h"
#include "stat.h"
#include "user.h"

// Running system call
int
main(void)
{
  printf(1, "There are %d system calls. /n", systemcalls());
  exit();
}
