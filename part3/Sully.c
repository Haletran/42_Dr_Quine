#include <stdio.h>

int i = 5;
#define QUINE "#include <stdio.h>%c%cint i = %d;%c#define QUINE %c%s%c%c#define MAIN() int main() {while (i >=0 ){char exec_name[10];sprintf(exec_name, %cSully_%cd.c%c, i); FILE *ptr = fopen(exec_name, %cw+%c); fprintf(ptr, QUINE,10,10,i,10,34,QUINE,34,10,34,37,34,34,34,10); fclose(ptr); i--;} return 0;}%cMAIN()"
#define MAIN() int main() {while (i >=0 ){char exec_name[10];sprintf(exec_name, "Sully_%d.c", i); FILE *ptr = fopen(exec_name, "w+"); fprintf(ptr, QUINE,10,10,i,10,34,QUINE,34,10,34,37,34,34,34,10); fclose(ptr); i--;} return 0;}
MAIN()