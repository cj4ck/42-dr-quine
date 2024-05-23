#include <stdio.h>

#define MAIN int main() {char *s = "#include <stdio.h>%c%c#define MAIN int main() {char *s = %c%s%c; printf(s, 10, 10, 34, s, 34, 10, 10, 10); return 0;}%c%cMAIN%c"; printf(s, 10, 10, 34, s, 34, 10, 10, 10); return 0;}

MAIN
