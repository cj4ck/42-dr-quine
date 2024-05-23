#include <stdio.h>
//Hello
void foo() {
    return;
}

int main() {
    //42
    foo();
    char *program = "#include <stdio.h>%1$c//Hello%1$cvoid foo() {%1$c    return;%1$c}%1$c%1$cint main() {%1$c    //42%1$c    foo();%1$c    char *program = %2$c%3$s%2$c;%1$c    printf(program, 10, 34, program);%1$c    return 0;%1$c}%1$c";
    printf(program, 10, 34, program);
    return 0;
}
