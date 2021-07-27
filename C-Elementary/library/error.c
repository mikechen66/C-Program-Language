#include "error.h"

void invocation_error(char *program, char *usage)
{
  fprintf(stderr, "Usage: %s %s\n", program, usage);
  exit(1);
}

void memory_error(char *file, unsigned int line, const char *func)
{
  fprintf(stderr, "Memory Allocation Failure: %s:%d in function %s()\n", file, line, func);
  exit(EXIT_FAILURE);
}

void print_error(char *program, char *s2)
{
  fprintf(stderr, "%s: %s: %s\n", program, s2, strerror(errno));
}
void exit_error(char *program, char *s2)
{
  print_error(program, s2);
  exit(EXIT_FAILURE);
}
int is_file_name_error(int e)
{
  if ((strcmp(strerror(e), "No such file or directory") == 0) ||
      (strcmp(strerror(e), "Is a directory") == 0) ||
      (strcmp(strerror(e), "File name too long") == 0))
    return 1;
  return 0;
}
