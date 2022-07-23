/**
 * This file has no copyright assigned and is placed in the Public Domain.
 *
 * @author: Krishna sssky307@163.com
 * @date 2022-07-23
 *
 */

#include "getopt.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
  int c;

  while (true) {
    int option_index = 0;
    static struct option long_options[] = {
        {"append", required_argument, 0, 0},     
        {"delete", required_argument, 0, 0},  
        {"color", required_argument, 0, 'c'}, 
        {"help", no_argument, 0, 'h'},
        {"version", no_argument, 0, 'v'},
        {0, 0, 0, 0}};

    c = getopt_long(argc, argv, "abc:d:vh012", long_options, &option_index);
    if (c == -1)
      break;

    switch (c) {
    case 0:
      printf("option %s", long_options[option_index].name);
      if (optarg)
        printf(" with arg %s", optarg);
      printf("\n");
      break;

    case 'a':
      printf("option a\n");
      break;

    case 'b':
      printf("option b\n");
      break;

    case 'c':
      printf("option c with value '%s'\n", optarg);
      break;

    case 'd':
      printf("option d with value '%s'\n", optarg);
      break;

    case 'h':
      printf("show help\n");
      break;

    case 'v':
      printf("show version");
      break;

    case '0':
    case '1':
    case '2':
      printf("option %c\n", c);
      break;

    case '?':
      break;

    default:
      printf("unknown character = 0x%x\n", c);
    }
  }

  if (optind < argc) {
    printf("non option arguments: ");
    while (optind < argc)
      printf("%s ", argv[optind++]);
    printf("\n");
  }

  return 0;
}