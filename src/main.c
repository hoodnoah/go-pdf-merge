#include <stdio.h>

#include "args.h"

int main(int argc, char *argv[])
{
  ArgsParser *args_parser = args_newArgsParser(argc, argv);

  printf("argc: %d\n", args_parser->argc);

  args_freeArgsParser(args_parser);
}
