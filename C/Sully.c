#include <stdio.h>

int main()
{
	char *s = "#include <stdio.h>%1$c%1$cint main()%1$c{%1$c	char *s = %2$c%4$s%2$c;%1$c	int x = %5$d;%1$c	char filename[28];%1$c	sprintf(filename, %2$cSully_%3$cd.c%2$c, x);%1$c	FILE *file = fopen(filename, %2$cw%2$c);%1$c	if(file)%1$c		fprintf(file, s, 10, 34, 37, s, x - 1);%1$c	return 0;%1$c}%1$c";
	int x = 5;
	char filename[28];
	sprintf(filename, "Sully_%d.c", x);
	FILE *file = fopen(filename, "w");
	if(file)
		fprintf(file, s, 10, 34, 37, s, x - 1);
	return 0;
}
