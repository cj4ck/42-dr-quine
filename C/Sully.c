#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char *s = "#include <stdio.h>%1$c#include <string.h>%1$c#include <stdlib.h>%1$c%1$cint main()%1$c{%1$c	char *s = %2$c%4$s%2$c;%1$c	int x = %5$d;%1$c	x--;%1$c	char filename[28];%1$c	sprintf(filename, %2$cSully_%3$cd.c%2$c, x);%1$c	char command[58];%1$c	sprintf(command, %2$cgcc %3$cs -o Sully_%3$cd && ./Sully_%3$cd%2$c, filename, x, x);%1$c	FILE *file = fopen(filename, %2$cw%2$c);%1$c	if(!file)%1$c		exit(1);%1$c	fprintf(file, s, 10, 34, 37, s, x);%1$c	fclose(file);%1$c	if(x > 0)%1$c		system(command);%1$c	return 0;%1$c}%1$c";
	int x = 5;
	x--;
	char filename[28];
	sprintf(filename, "Sully_%d.c", x);
	char command[58];
	sprintf(command, "gcc %s -o Sully_%d && ./Sully_%d", filename, x, x);
	FILE *file = fopen(filename, "w");
	if(!file)
		exit(1);
	fprintf(file, s, 10, 34, 37, s, x);
	fclose(file);
	if(x > 0)
		system(command);
	return 0;
}
