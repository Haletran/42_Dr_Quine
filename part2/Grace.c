#include <stdio.h>
//this is a comment
#define QUINE "#include <stdio.h>%c//this is a comment%c#define QUINE %c%s%c%c#define COPY void child(){FILE *file_ptr = fopen(%cGrace_kid.c%c, %cw+%c); fprintf(file_ptr, QUINE,10,10,34,QUINE,34,10,34,34,34,34,10,10); fclose(file_ptr);}%c#define MAIN COPY int main(){child();printf(QUINE,10,10,34,QUINE,34,10,34,34,34,34,10,10);return 0;}%cMAIN"
#define COPY void child(){FILE *file_ptr = fopen("Grace_kid.c", "w+"); fprintf(file_ptr, QUINE,10,10,34,QUINE,34,10,34,34,34,34,10,10); fclose(file_ptr);}
#define MAIN COPY int main(){child();printf(QUINE,10,10,34,QUINE,34,10,34,34,34,34,10,10);return 0;}
MAIN