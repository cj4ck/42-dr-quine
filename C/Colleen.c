#include <stdio.h>
//Hello
void foo() {
    return;
}

int main() {
    //42
    foo();
    char *program = "#include <stdio.h>%c//Hello%cvoid foo() {%c    return;%c}%c%cint main() {%c    //42%c    foo();%c    char *program = %c%s%c;%c    printf(program, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, program, 34, 10, 10, 10, 10);%c    return 0;%c}%c";
    printf(program, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, program, 34, 10, 10, 10, 10);
    return 0;
}
