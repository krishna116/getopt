# getopt

A cross platform getopt library provide follow methods.
```C
int getopt (int argc, char *const argv[], const char *optstring);

int getopt_long (int argc, char *const argv[], const char *shortopts,
            const struct option * longopts, int *longind);

int getopt_long_only (int argc, char *const argv[], const char *shortopts,
            const struct option * longopts, int *longind);
```

The getopt source code(getopt.h and getopt.c) is extracted from [newlib](https://sourceware.org/newlib/), and it can be built with MSVC/GCC compiler.  

The getopt source code license: BSD or FreeBSD license.
