#include <stdio.h>
char x[]="#include <stdio.h>%cchar x[]=%c%s%c;%c/*%cthis is a comment%c*/%cvoid xd(){}%cint main() {%c/*%cthis is a comment too%c*/%cxd();%cprintf(x,10,34,x,34,10, 10, 10, 10, 10,10,10, 10, 10, 10, 10, 10);%creturn 0;%c}";
/*
this is a comment
*/
void xd(){}
int main() {
/*
this is a comment too
*/
xd();
printf(x,10,34,x,34,10, 10, 10, 10, 10,10,10, 10, 10, 10, 10, 10);
return 0;
}