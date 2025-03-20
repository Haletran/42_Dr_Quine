#include <stdio.h>
char x[]="#include <stdio.h>%cchar x[]=%c%s%c;%c//this is a comment%cvoid xd(){}%cint main() {%c//this is a comment too%cxd();%cprintf(x,10,34,x,34,10, 10, 10, 10, 10, 10, 10, 10);%creturn 0;%c}";
//this is a comment
void xd(){}
int main() {
//this is a comment too
xd();
printf(x,10,34,x,34,10, 10, 10, 10, 10, 10, 10, 10);
return 0;
}