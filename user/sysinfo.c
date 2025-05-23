#include "kernel/types.h"
#include "kernel/sysproc.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  struct sysinfo s;
  if (sysinfo(&s) != 0)
    exit(1);
  printf("MemFree:\t%ld B\n", s.memfree);
  printf("NumProc:\t%ld\n", s.nproc);
  exit(0);
}
