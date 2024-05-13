#include <stdlib.h>

#include "include/args.h"

ArgsParser *args_newArgsParser(int argc, char *argv[])
{
  ArgsParser *args_parser = malloc(sizeof(ArgsParser));
  args_parser->argc = argc;
  args_parser->argv = argv;

  return args_parser;
}

void args_freeArgsParser(ArgsParser *args_parser)
{
  free(args_parser);
}
