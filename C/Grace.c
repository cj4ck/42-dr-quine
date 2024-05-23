#include <stdio.h>

#define PROGRAM "#include <stdio.h>%1$c%1$c#define PROGRAM %2$c%3$s%2$c%1$c%1$c#define END return 0;%1$c%1$c#define MAIN int main() {FILE *file = fopen(%2$cGrace_kid.c%2$c, %2$cw%2$c); char *s = PROGRAM; fprintf(file, s, 10, 34, s); END}%1$c%1$cMAIN%1$c"

#define END return 0;

#define MAIN int main() {FILE *file = fopen("Grace_kid.c", "w"); char *s = PROGRAM; fprintf(file, s, 10, 34, s); END}

MAIN
