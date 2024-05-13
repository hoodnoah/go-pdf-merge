#ifndef ARGS_H
#define ARGS_H

#include <stdbool.h>

typedef struct
{
  char *pdf_directory;
  bool recurse;
} Args;

typedef struct
{
  int argc;
  char **argv;
} ArgsParser;

ArgsParser *args_newArgsParser(int argc, char *argv[]);

void args_freeArgsParser(ArgsParser *args_parser);

#endif
